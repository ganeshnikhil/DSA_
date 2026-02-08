#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string upperStr = str;
    string lowerStr = str;

    for (char &c : upperStr)
        c = toupper(c);
    for (char &c : lowerStr)
        c = tolower(c);

    cout << "Length: " << str.length() << endl
         << "Original: " << str << endl
         << "Uppercase: " << upperStr << endl
         << "Lowercase: " << lowerStr << endl;
    return 0;
}