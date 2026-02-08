#include <stdio.h>
#include <string.h>
#include <ctype.h>

int caseInsensitiveCompare(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (tolower(*str1) != tolower(*str2))
            return (tolower(*str1) - tolower(*str2));
        str1++;
        str2++;
    }
    return (tolower(*str1) - tolower(*str2));
}

int main() {
    char str1[100], str2[100];

    printf("Enter String1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String2: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Equal\n");
    else
        printf("Not equal\n");

    if (caseInsensitiveCompare(str1, str2) == 0)
        printf("Equal ignoring case\n");
    else
        printf("Not equal ignoring case\n");

    int lexOrder = strcmp(str1, str2);
    if (lexOrder < 0)
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    else if (lexOrder > 0)
        printf("\"%s\" comes after \"%s\"\n", str1, str2);
    else
        printf("Strings are identical\n");

    return 0;
}
