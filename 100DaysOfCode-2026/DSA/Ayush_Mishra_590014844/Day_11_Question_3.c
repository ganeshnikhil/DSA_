#include <stdio.h>
#include <string.h>
int count_palindromic_substrings(char *s) {
    int n = strlen(s), count = 0;

    for (int i = 0; i < n; i++) {
        for (int offset = 0; offset <= 1; offset++) {
            int l = i, r = i + offset;
            while (l >= 0 && r < n && s[l] == s[r]) {
                count++;
                l--;
                r++;
            }
        }
    }

    return count;
}

int main() {
    printf("%d\n", count_palindromic_substrings("abc"));  // 3
    printf("%d\n", count_palindromic_substrings("aaa"));  // 6
}
