#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool Palindrome(const string &str)
{
    unordered_map<char, int> freq;

    for (char c : str)
    {
        if (isalpha(c))
            freq[c]++;
    }

    int oddCount = 0;

    for (auto &p : freq)
    {
        if (p.second % 2 != 0)
            oddCount++;
    }

    return oddCount <= 1;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (Palindrome(str))
        cout << "true";
    else
        cout << "false";

    return 0;
}
