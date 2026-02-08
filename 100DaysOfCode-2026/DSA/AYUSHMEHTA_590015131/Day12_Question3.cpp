#include <iostream>
#include <string>
using namespace std;

string compressString(const string &s) {
    string compressed = "";
    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            compressed += string(1, s[i - 1]) + to_string(count);
            count = 1;
        }
    }

    compressed += string(1, s.back()) + to_string(count);

    return compressed.length() < s.length() ? compressed : s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = compressString(s);
    cout << "Compressed: " << result << endl;

    return 0;
}
