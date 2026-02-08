#include <iostream>
#include <string>

using namespace std;

int countPalindromicSubstrings(string s) {
    int n = s.length();
    int count = 0;

    auto expandAroundCenter = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    };

    for (int i = 0; i < n; ++i) {
        expandAroundCenter(i, i);
        expandAroundCenter(i, i + 1);
    }

    return count;
}

int main() {
    string input;
    cin >> input;

    int result = countPalindromicSubstrings(input);
    cout << result << endl;
}
