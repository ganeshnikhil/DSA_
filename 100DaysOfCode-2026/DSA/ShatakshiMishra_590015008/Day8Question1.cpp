#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;
    
    getline(cin, input);

    int length = input.length();

    string upper = input;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);

    string lower = input;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

    cout << "Length: " << length << ", ";
    cout << "Original: \"" << input << "\"" << ", ";
    cout << "Uppercase: \"" << upper << "\"" << ", ";
    cout << "Lowercase: \"" << lower << "\"" << endl;
}
