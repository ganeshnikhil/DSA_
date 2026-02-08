#include <iostream>
using namespace std;

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int expandAroundCenter(char str[], int left, int right, int n) {
    int count = 0;
    while (left >= 0 && right < n && str[left] == str[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

int countPalindromicSubstrings(char str[]) {
    int n = stringLength(str);
    int total = 0;

    for (int center = 0; center < n; center++) {
        total += expandAroundCenter(str, center, center, n);     // odd-length
        total += expandAroundCenter(str, center, center + 1, n); // even-length
    }

    return total;
}

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    int result = countPalindromicSubstrings(input);
    cout << "Total palindromic substrings: " << result << endl;

    return 0;
}
