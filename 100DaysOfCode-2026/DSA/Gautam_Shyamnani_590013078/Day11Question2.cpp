#include <iostream>
#include <string>
using namespace std;

string findFromCenter(string text, int left, int right) {
    while (left >= 0 && right < text.length() && text[left] == text[right]) {
        left--;
        right++;
    }
    return text.substr(left + 1, right - left - 1);
}

string longestPalindrome(string text) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        string one = findFromCenter(text, i, i);    
        string two = findFromCenter(text, i, i + 1); 

        if (one.size() > result.size()) result = one;
        if (two.size() > result.size()) result = two;
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Longest palindrome: " << longestPalindrome(input) << endl;
    return 0;
}
