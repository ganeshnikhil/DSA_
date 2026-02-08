#include <iostream>
using namespace std;

bool isAlphabet(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');  // or simply c + 32
    }
    return c;
}

bool isVowel(char c) {
    c = toLowerCase(c);  
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = 0;
    int consonantCount = 0;

    for (char c : input) {
        if (isAlphabet(c)) {
            if (isVowel(c)) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
