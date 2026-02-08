#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char str[], char lower[]) {
    int i = 0;
    while (str[i]) {
        lower[i] = tolower(str[i]);
        i++;
    }
    lower[i] = '\0';
}

int main() {
    char str1[100], str2[100];
    char lower1[100], lower2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Strings are exactly equal.\n");
    else
        printf("Strings are not exactly equal.\n");

    toLower(str1, lower1);
    toLower(str2, lower2);

    if (strcmp(lower1, lower2) == 0)
        printf("Strings are equal ignoring case.\n");
    else
        printf("Strings are not equal ignoring case.\n");

    if (strcmp(str1, str2) < 0)
        printf("\"%s\" comes before \"%s\" alphabetically.\n", str1, str2);
    else if (strcmp(str1, str2) > 0)
        printf("\"%s\" comes after \"%s\" alphabetically.\n", str1, str2);
    else
        printf("Both strings are the same in alphabetical order.\n");

    return 0;
}
