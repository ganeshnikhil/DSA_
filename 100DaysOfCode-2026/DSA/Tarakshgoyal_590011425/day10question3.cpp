#include <iostream>
using namespace std;

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + ('a' - 'A');
    return ch;
}

bool isAlphabet(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

void countFrequency(char str[], int freq[26]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isAlphabet(str[i])) {
            char ch = toLower(str[i]);
            freq[ch - 'a']++;
        }
    }
}

bool areAnagrams(char str1[], char str2[]) {
    int freq1[26] = {0};
    int freq2[26] = {0};

    countFrequency(str1, freq1);
    countFrequency(str2, freq2);

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) return false;
    }
    return true;
}

int main() {
    char str1[1000], str2[1000];

    cout << "Enter first string: ";
    cin.getline(str1, 1000);

    cout << "Enter second string: ";
    cin.getline(str2, 1000);

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
