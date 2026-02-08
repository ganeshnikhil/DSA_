#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Length: " << input.length() << endl;
    cout << "Original: \"" << input << "\"" << endl;

    string upper = input;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "Uppercase: \"" << upper << "\"" << endl;

    string lower = input;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << "Lowercase: \"" << lower << "\"" << endl;

    return 0;
}
