#include <iostream>
#include <string>
using namespace std;

int countPalindromes(string s)
{
    int n = s.length();
    int count = 0;

    for (int center = 0; center < 2 * n - 1; center++)
    {
        int left = center / 2;
        int right = left + (center % 2);

        while (left >= 0 && right < n && s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Total palindrome substrings: " << countPalindromes(s);
    return 0;
}
