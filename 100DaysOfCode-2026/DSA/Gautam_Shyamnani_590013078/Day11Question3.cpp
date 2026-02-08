#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string text, int start, int end) {
    while (start < end) {
        if (text[start] != text[end]) return false;
        start++;
        end--;
    }
    return true;
}

int countPalindromes(string text) {
    int count = 0;
    int length = text.length();

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (isPalindrome(text, i, j)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int total = countPalindromes(input);
    cout << "Total palindromic substrings: " << total << endl;

    return 0;
}
