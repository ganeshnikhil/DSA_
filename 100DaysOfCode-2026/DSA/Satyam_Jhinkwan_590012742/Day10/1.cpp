#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toLower(const string &s)
{
    string res = s;
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
}

int main()
{
    string str1, str2;
    cout << "Enter string1: ";
    getline(cin, str1);
    cout << "Enter string2: ";
    getline(cin, str2);

    if (str1 == str2)
        cout << "Equal, ";
    else
        cout << "Not equal, ";

    if (toLower(str1) == toLower(str2))
        cout << "Equal ignoring case, ";
    else
        cout << "Not equal ignoring case, ";

    if (str1 < str2)
        cout << "\"" << str1 << "\" comes before \"" << str2 << "\"";
    else if (str1 > str2)
        cout << "\"" << str2 << "\" comes before \"" << str1 << "\"";
    else
        cout << "Strings are identical";

    return 0;
}
