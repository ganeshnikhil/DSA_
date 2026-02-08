#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout<<"Enter the string: ";
    getline(cin, text);

    cout << "Length: " << text.length();
    cout << ", Original: \"" << text << "\"";

    cout << ", Uppercase: \"";
    for (char c : text) cout << (char)toupper(c);
    cout << "\"";

    cout << ", Lowercase: \"";
    for (char c : text) cout << (char)tolower(c);
    cout << "\"" << endl;

    return 0;
}
