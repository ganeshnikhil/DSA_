#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str, newStr = "";
    cout << "Enter a string: ";
    getline(cin, str);
    for (char c : str)
    {
        if (isalnum(c))
            newStr += tolower(c);
    }
    int n = newStr.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (newStr[i] != newStr[n - i - 1])
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
    return 0;
}
