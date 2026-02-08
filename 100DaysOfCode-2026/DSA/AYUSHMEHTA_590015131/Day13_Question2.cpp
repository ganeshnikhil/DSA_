#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool canFormPalindrome(const string& s) {
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto pair : freq) {
        if (pair.second % 2 == 1) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (canFormPalindrome(s)) {
        cout << "Yes, a permutation can form a palindrome.\n";
    } else {
        cout << "No, it cannot form a palindrome.\n";
    }

    return 0;
}
