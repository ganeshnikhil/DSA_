#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if (str1 == str2)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;
    string temp1 = str1, temp2 = str2;
    transform(temp1.begin(), temp1.end(), temp1.begin(), ::tolower);
    transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);

    if (temp1 == temp2)
        cout << "Equal ignoring case" << endl;
    else
        cout << "Not equal ignoring case" << endl;
    if (str1 == str2)
        cout << "Strings are identical" << endl;
    else if (str1 < str2)
        cout << str1 << " comes before " << str2 << endl;
    else
        cout << str2 << " comes before " << str1 << endl;

    return 0;
}
