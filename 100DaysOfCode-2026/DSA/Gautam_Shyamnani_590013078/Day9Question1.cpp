#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a word: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "It's a palindrome!" << endl;
    else
        cout << "Not a palindrome." << endl;

    return 0;
}
