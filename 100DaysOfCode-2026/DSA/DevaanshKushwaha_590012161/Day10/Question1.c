#include <stdio.h>
#include <string.h>
#include <ctype.h>

int case_insensitive_compare(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        char c1 = tolower(*s1);
        char c2 = tolower(*s2);
        if (c1 != c2) return c1 - c2;
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if any
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Exact equality
    if (strcmp(str1, str2) == 0) {
        printf("Equal, ");
    } else {
        printf("Not equal, ");
    }

    // Case-insensitive equality
    if (case_insensitive_compare(str1, str2) == 0) {
        printf("Equal ignoring case, ");
    } else {
        printf("Not equal ignoring case, ");
    }

    // Lexicographical order
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Strings are identical\n");
    } else if (cmp < 0) {
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    } else {
        printf("\"%s\" comes before \"%s\"\n", str2, str1);
    }

    return 0;
}
