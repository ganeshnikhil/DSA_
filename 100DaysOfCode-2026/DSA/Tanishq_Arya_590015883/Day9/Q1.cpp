#include <iostream>
using namespace std;

bool isAlphabet(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A'); // convert to lowercase
                                //'a' - 'A' = 97 - 65 = 32
                                
    return c;
}

bool isPalindrome(const string& input) {
    int left = 0;
    int right = input.length() - 1;

    while (left < right) {
        
        while (left < right && !isAlphabet(input[left])) left++;
        while (left < right && !isAlphabet(input[right])) right--;

        if (toLowerCase(input[left]) != toLowerCase(input[right]))
            return false;

        left++;
        right--;
    }

    return true;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    if (isPalindrome(text)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
