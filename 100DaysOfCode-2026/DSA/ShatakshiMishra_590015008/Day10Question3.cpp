#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

string normalize(string& str) {
    string result;
    for (int i=0;i<str.size();i++) 
    {
        if (str[i] != ' ') 
        {
            result += tolower(str[i]);
        }
    }
    return result;
}

bool areAnagrams(string& str1, string& str2) {
    string s1 = normalize(str1);
    string s2 = normalize(str2);

    if (s1.length() != s2.length()) 
    return false;

    unordered_map<char, int> freq1, freq2;

    for (int i=0;i<s1.size();i++) 
    freq1[s1[i]]++;
    for (int i=0;i<s2.size();i++) 
    freq2[s2[i]]++;

    return freq1 == freq2;
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if (areAnagrams(str1, str2)) 
    {
        cout << "true" << endl;
    } 
    else 
    {
        cout << "false" << endl;
    }
}
