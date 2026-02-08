#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int start = 0, maxLen = 1;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l + 1 > maxLen)
            {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }

        l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l + 1 > maxLen)
            {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }
    }

    cout << "Longest Palindrome Substring : " << s.substr(start, maxLen);
    return 0;
}