#include <stdio.h>
#include <string.h>

int countPalindromicSubstrings(char *s) {
    int count = 0, len = strlen(s);

    for (int center = 0; center < 2 * len - 1; center++) {
        int left = center / 2;
        int right = left + center % 2;

        while (left >= 0 && right < len && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    char input[1001];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // remove trailing newline

    int result = countPalindromicSubstrings(input);
    printf("Total palindromic substrings: %d\n", result);
    return 0;
}
