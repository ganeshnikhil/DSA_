#include <stdio.h>
#include <string.h>

int countFromCenter(char *s, int left, int right) {
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
    char input[] = "abc";
    int result = countPalindromicSubstrings(input);
    printf("Total Palindromic Substrings: %d\n", result);
    return 0;
}
