#include <iostream>
using namespace std;

bool isAlphabet(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isVowel(char ch) {
    ch = toLower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    int vowels = 0;
    int consonants = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        if (isAlphabet(ch)) {
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
