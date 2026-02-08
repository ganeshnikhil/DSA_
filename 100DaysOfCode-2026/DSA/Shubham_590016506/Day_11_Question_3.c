#include <stdio.h>
#include <string.h>

int countSubstrings(char* s) {
    int n = strlen(s), count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 1; j++) {
            int l = i, r = i + j;
            while (l >= 0 && r < n && s[l] == s[r]) {
                count++;
                l--; r++;
            }
        }
    }
    return count;
}

int main() {
    char s[] = "aaa";
    printf("%d\n", countSubstrings(s));
}