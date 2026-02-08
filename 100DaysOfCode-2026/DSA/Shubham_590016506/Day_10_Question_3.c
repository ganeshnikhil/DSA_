#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count(char *s, int *a) {
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) a[tolower(s[i]) - 'a']++;
    }
}

int main() {
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    int a[26] = {0}, b[26] = {0};
    count(s1, a);
    count(s2, b);
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            printf("false\n");
            return 0;
        }
    }
    printf("true\n");
    return 0;
}