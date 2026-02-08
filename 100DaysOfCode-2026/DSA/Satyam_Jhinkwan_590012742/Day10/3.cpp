#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
using namespace std;

unordered_map<char, int> getFreq(const string &str)
{
    unordered_map<char, int> freq;
    for (char c : str)
    {
        if (isalpha(c))
        {
            freq[tolower(c)]++;
        }
    }
    return freq;
}

int main()
{
    string str1, str2;
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);

    unordered_map<char, int> freq1 = getFreq(str1);
    unordered_map<char, int> freq2 = getFreq(str2);

    if (freq1 == freq2)
        cout << "true";
    else
        cout << "false";

    return 0;
}
