#include <stdio.h>
#include <string.h>
#include <ctype.h>

int caseInsensitiveCompare(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (tolower(*s1) != tolower(*s2)) {
            return tolower(*s1) - tolower(*s2);
        }
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (strcmp(str1, str2) == 0) {
        printf("Strings are exactly equal\n");
    } else if (caseInsensitiveCompare(str1, str2) == 0) {
        printf("Strings are equal (case-insensitive)\n");
    } else {
        printf("Strings are different\n");
    }

    int lex = strcmp(str1, str2);
    if (lex < 0) {
        printf("\"%s\" comes first lexicographically\n", str1);
    } else if (lex > 0) {
        printf("\"%s\" comes first lexicographically\n", str2);
    } else {
        printf("Both strings are the same lexicographically\n");
    }

    return 0;
}
