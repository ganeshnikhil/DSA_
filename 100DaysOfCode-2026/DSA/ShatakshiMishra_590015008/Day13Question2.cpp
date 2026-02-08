#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool canFormPalindrome(string& s) {
    unordered_map<char, int> freq;

    for (char c : s) {
        if (c != ' ')
            freq[c]++;
    }

    int oddCount = 0;
    for (const auto& pair : freq) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() {
    string input;
    getline(cin, input);

    bool result = canFormPalindrome(input);
    if(result == 1)
    cout << "true" << endl;
    else
    cout << "false" << endl;
}
