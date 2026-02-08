#include <iostream>
using namespace std;

bool isRotation(const string& s1, const string& s2) {
    return s1.length() == s2.length() && (s1 + s1).find(s2) != string::npos;
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (isRotation(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
