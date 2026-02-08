#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string newStr = ""; // I made the new string where i will only save alphabets ignoring any input given by the user(number space or anything)
    for (char c : str)
    {
        if (isalpha(c))
            newStr += tolower(c);
    }

    int n = newStr.length() - 1;
    for (int i = 0; i <= n / 2; i++)
    {
        if (newStr[i] != newStr[n - i])
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}