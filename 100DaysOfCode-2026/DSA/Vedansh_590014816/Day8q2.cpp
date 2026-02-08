#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to count: ";
    cin >> ch;

    int count = 0;
    for (char c : str) {
        if (c == ch) count++;
    }

    cout << "Occurrences of '" << ch << "': " << count << endl;
    return 0;
}
