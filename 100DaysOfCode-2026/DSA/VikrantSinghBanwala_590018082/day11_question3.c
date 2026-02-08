#include <stdio.h>
#include <string.h>
int countPalindromicSubstrings(const char *s) {
    int n = strlen(s), count = 0;
    for (int center = 0; center < n; center++) {
        for (int len = 0; len < 2; len++) {
            int left = center, right = center + len;
            while (left >= 0 && right < n && s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
        }
    }
    return count;
}
int main() {
    char input1[] = "abc", input2[] = "aaa";
    printf("Input: \"%s\"\nOutput: %d\n", input1, countPalindromicSubstrings(input1));
    printf("Input: \"%s\"\nOutput: %d\n", input2, countPalindromicSubstrings(input2));
    return 0;
}
