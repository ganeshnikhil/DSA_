#include <stdio.h>
#include <string.h>

int countPalindromicSubstrings(char str[]) {
    int n = strlen(str);
    int count = 0;

    for (int center = 0; center < 2 * n - 1; center++) {
        int left = center / 2;
        int right = left + (center % 2);

        while (left >= 0 && right < n && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    int result = countPalindromicSubstrings(str);

    printf("Total Palindromic Substrings: %d\n", result);

    return 0;
}
