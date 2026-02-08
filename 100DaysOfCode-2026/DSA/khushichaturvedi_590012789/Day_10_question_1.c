#include <stdio.h>
#include <string.h>
#include <ctype.h>
int caseInsensitiveCompare(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (tolower((unsigned char)*s1) != tolower((unsigned char)*s2)) {
            return tolower((unsigned char)*s1) - tolower((unsigned char)*s2);
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';
    if (strcmp(str1, str2) == 0) {
        printf("The strings are exactly equal.\n");
    }
    else if (caseInsensitiveCompare(str1, str2) == 0) {
        printf("The strings are equal (ignoring case).\n");
    }
    else {
        printf("The strings are completely different.\n");
    }
    if (strcmp(str1, str2) < 0) {
        printf("\"%s\" comes before \"%s\" lexicographically.\n", str1, str2);
    } else if (strcmp(str1, str2) > 0) {
        printf("\"%s\" comes after \"%s\" lexicographically.\n", str1, str2);
    } else {
        printf("Both strings are lexicographically equal.\n");
    }
    return 0;
}
