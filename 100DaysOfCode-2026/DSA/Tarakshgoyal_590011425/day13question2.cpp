#include <iostream>
using namespace std;

int charIndex(char ch) {
    if (ch >= 'a' && ch <= 'z') return ch - 'a';
    if (ch >= 'A' && ch <= 'Z') return ch - 'A';  // Case-insensitive
    return -1;
}

bool canFormPalindrome(char str[]) {
    int freq[26] = {0};
    int i = 0;

    while (str[i] != '\0') {
        int idx = charIndex(str[i]);
        if (idx != -1) freq[idx]++;
        i++;
    }

    int oddCount = 0;
    for (int j = 0; j < 26; j++) {
        if (freq[j] % 2 != 0) oddCount++;
    }

    return oddCount <= 1;
}

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    if (canFormPalindrome(input)) {
        cout << "Yes, a palindrome can be formed from a permutation." << endl;
    } else {
        cout << "No, a palindrome cannot be formed from any permutation." << endl;
    }

    return 0;
}
