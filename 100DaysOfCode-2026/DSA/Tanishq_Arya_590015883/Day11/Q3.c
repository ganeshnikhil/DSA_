#include <stdio.h>
#include <string.h>

int countFromCenter(const char *s, int left, int right) {
    int count = 0;
    int n = strlen(s);

    while (left >= 0 && right < n && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }

    return count;
}

int countPalindromicSubstrings(char *s) {
    int total = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        total += countFromCenter(s, i, i);

        total += countFromCenter(s, i, i + 1);
    }

    return total;
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    int count = countPalindromicSubstrings(input);
    printf("Total palindromic substrings: %d\n", count);

    return 0;
}
