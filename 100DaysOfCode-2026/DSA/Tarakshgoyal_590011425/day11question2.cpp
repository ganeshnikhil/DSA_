#include <iostream>
using namespace std;

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void copySubstring(char source[], int start, int length, char result[]) {
    for (int i = 0; i < length; i++) {
        result[i] = source[start + i];
    }
    result[length] = '\0';
}

void longestPalindromicSubstring(char str[], char result[]) {
    int n = stringLength(str);
    bool dp[1000][1000] = {false};
    int maxLength = 1;
    int start = 0;

    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (str[i] == str[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                if (len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    copySubstring(str, start, maxLength, result);
}

int main() {
    char input[1000], result[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    longestPalindromicSubstring(input, result);

    cout << "Longest Palindromic Substring: " << result << endl;
    return 0;
}
