#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to compare strings ignoring case
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
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // Exact equality
    if (strcmp(str1, str2) == 0) {
        printf("Equal, ");
    } else {
        printf("Not equal, ");
    }

    // Case-insensitive equality
    if (caseInsensitiveCompare(str1, str2) == 0) {
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
