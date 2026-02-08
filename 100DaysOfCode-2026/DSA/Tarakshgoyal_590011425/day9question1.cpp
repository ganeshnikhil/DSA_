#include <iostream>
using namespace std;

bool isAlphabet(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

int getLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

bool isPalindrome(char str[]) {
    char clean[1000];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isAlphabet(str[i])) {
            clean[j] = toLowerCase(str[i]);
            j++;
        }
    }
    clean[j] = '\0';

    int start = 0;
    int end = j - 1;
    while (start < end) {
        if (clean[start] != clean[end]) {
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

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
