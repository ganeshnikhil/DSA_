#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) 
    {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    if (strcmp(str1, str2) == 0)
        printf("Equal, ");
    else
        printf("Not equal, ");

    i = 0;
    while (str1[i] && str2[i]) {
        if (tolower(str1[i]) != tolower(str2[i]))
            break;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Equal ignoring case, ");
    else
        printf("Not equal ignoring case, ");

    if (strcmp(str1, str2) < 0)
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    else if (strcmp(str1, str2) > 0)
        printf("\"%s\" comes after \"%s\"\n", str1, str2);
    else
        printf("Strings are identical\n");

    return 0;
}
