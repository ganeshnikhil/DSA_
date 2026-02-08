#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    if (s[n - 1] == '\n') s[n - 1] = '\0';
    n = strlen(s);
    int start = 0, max = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int l = i, r = j, flag = 1;
            while (l < r) {
                if (s[l] != s[r]) {
                    flag = 0;
                    break;
                }
                l++;
                r--;
            }
            if (flag && j - i + 1 > max) {
                start = i;
                max = j - i + 1;
            }
        }
    }
    for (int i = start; i < start + max; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
