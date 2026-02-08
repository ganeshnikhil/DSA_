// day12.md
// 1. String Rotation

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    // Step 1: Length check
    if (str1.length() != str2.length()) {
        cout << "Not a rotation\n";
        return 0;
    }

    // Step 2: Create doubled string
    string doubled = str1 + str1;

    // Step 3: Find str2 in doubled
    size_t pos = doubled.find(str2);

    if (pos != string::npos && pos < str1.length()) {
        cout << "Rotation exists\n";
        cout << "Left rotation positions: " << pos << endl;
        cout << "Right rotation positions: "  << str1.length() - pos << endl;
    } else {
        cout << "Not a rotation\n";
    }

    return 0;
}
