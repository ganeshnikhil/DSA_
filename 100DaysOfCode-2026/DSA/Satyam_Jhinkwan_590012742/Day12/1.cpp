#include <iostream>
#include <string>
using namespace std;

bool isRotational(string a, string b)
{
    if (a.length() != b.length())
        return false;
    string combined = a + a;
    return combined.find(b) != string::npos;
}

int main()
{
    string str1, str2;
    cout << "Enter string1: ";
    getline(cin, str1);
    cout << "Enter string2: ";
    getline(cin, str2);

    if (isRotational(str1, str2))
        cout << "true";
    else
        cout << "false";

    return 0;
}