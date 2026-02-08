#include <stdio.h>
#include <string.h>

int countPalindromes(char *s) {
    int n = strlen(s), count = 0;
    for (int center = 0; center < 2*n-1; center++) {
        int left = center/2;
        int right = left + center%2;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }
    return count;
}

int main() {
    char s[1000]; fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")] = 0;
    printf("%d\n", countPalindromes(s));
    return 0;
}
