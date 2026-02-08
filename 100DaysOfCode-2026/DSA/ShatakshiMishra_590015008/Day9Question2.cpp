#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int vowels = 0, consonants = 0;

    for (int i = 0;i<s.size();i++) {
        if (isalpha(s[i])) {
            char lowerCh = tolower(s[i]);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
}
