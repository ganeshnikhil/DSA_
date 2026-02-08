#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch) {
    return (ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9');
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isAdvancedPalindrome(char str[]) {
    char cleaned[1000];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isAlphaNumeric(str[i])) {
            cleaned[j++] = toLower(str[i]);
        }
    }
    cleaned[j] = '\0';

    int start = 0;
    int end = j - 1;

    while (start < end) {
        if (cleaned[start] != cleaned[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    if (isAdvancedPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
