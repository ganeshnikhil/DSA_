#include <iostream>
#include <algorithm>
using namespace std;

string simplify(string s) {
    string result = "";
    for (char c : s)
        if (c != ' ') result += tolower(c);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (simplify(str1) == simplify(str2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
