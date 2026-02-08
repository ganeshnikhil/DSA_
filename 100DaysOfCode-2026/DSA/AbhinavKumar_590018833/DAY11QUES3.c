#include <stdio.h>
#include <string.h>

int countPalindromesFromCenter(char str[], int left, int right) {
    int count = 0;
    int n = strlen(str);

    while (left >= 0 && right < n && str[left] == str[right]) {
        count++;
        left--;
        right++;
    }

    return count;
}

int countAllPalindromicSubstrings(char str[]) {
    int count = 0;
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        // Odd length
        count += countPalindromesFromCenter(str, i, i);

        count += countPalindromesFromCenter(str, i, i + 1);
    }

    return count;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int result = countAllPalindromicSubstrings(str);
    printf("Total Palindromic Substrings: %d\n", result);

    return 0;
}
