#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toLower(string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;

    if (str1 == str2) 
    {
        cout << "Equal, Equal ignoring case, ";
    } 
    else 
    {
        if (toLower(str1) == toLower(str2)) 
        {
            cout << "Not equal, Equal ignoring case, ";
        } 
        else 
        {
            cout << "Not equal, Not equal ignoring case, ";
        }
    }

    if (str1 < str2) 
    {
        cout << "\"" << str1 << "\" comes before \"" << str2 << "\"" << endl;
    } 
    else if (str1 > str2) 
    {
        cout << "\"" << str2 << "\" comes before \"" << str1 << "\"" << endl;
    } 
    else 
    {
        cout << "Strings are identical" << endl;
    }
}
