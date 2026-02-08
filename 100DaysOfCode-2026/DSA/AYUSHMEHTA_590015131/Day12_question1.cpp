#include <iostream>
#include <algorithm>
using namespace std;

bool checkRotation(string &s1, string &s2) {
    if (s1.length() != s2.length()) return false;
    if (s1.empty() && s2.empty()) return true;

    string temp = s1;
    int n = s1.length();
    
    for (int i = 0; i < n; ++i) {
        rotate(temp.begin(), temp.begin() + 1, temp.end());

        if (temp == s2) return true;
    }

    return false;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);

    if (checkRotation(s1, s2))
        cout << "Yes, the string is a rotation of the other." << endl;
    else
        cout << "No, it's not a rotation." << endl;

    return 0;
}
