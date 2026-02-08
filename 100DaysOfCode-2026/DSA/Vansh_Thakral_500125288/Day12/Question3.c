#include <stdio.h>
#include <string.h>

int countPalindromicSubstrings(char *s) {
    int n = strlen(s), count = 0;

    for (int center = 0; center < 2 * n - 1; center++) {
        int left = center / 2;
        int right = left + center % 2;

        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    char input[] = "aaa";
    printf("%d\n", countPalindromicSubstrings(input));
    return 0;
}
