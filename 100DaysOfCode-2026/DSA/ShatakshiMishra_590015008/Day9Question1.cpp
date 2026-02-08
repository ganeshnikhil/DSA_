#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string filtered = "";
    for (int i = 0;i<s.size();i++) 
    {
        if (isalpha(s[i])) 
        {
            filtered += tolower(s[i]);
        }
    }

    int left = 0, right = filtered.length() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) 
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;
    getline(cin, input);  
    if (isPalindrome(input)) 
    {
        cout << "true" << endl;
    } else 
    {
        cout << "false" << endl;
    }
}
