#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int vowels = 0, constraints = 0;

    for (char c : s) {
        if (isalpha(c)) { 
            char lowerChar = tolower(c);
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                vowels++;
            } else {
                constraints++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << constraints << endl;

    return 0;
}
