#include <stdio.h>
#include <string.h>

// Expand around center and count palindromes
int expandFromCenter(char *s, int left, int right) {
    int count = 0;
    int len = strlen(s);
    while (left >= 0 && right < len && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

int countPalindromicSubstrings(char *s) {
    int total = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        total += expandFromCenter(s, i, i);     // Odd length
        total += expandFromCenter(s, i, i + 1); // Even length
    }

    return total;
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Strip newline if present
    input[strcspn(input, "\n")] = '\0';

    int result = countPalindromicSubstrings(input);
    printf("Total palindromic substrings: %d\n", result);

    return 0;
}
