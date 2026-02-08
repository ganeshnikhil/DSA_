#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str1[100], str2[100];
    int i, flag = 1;
    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';
    if (str2[strlen(str2) - 1] == '\n')
        str2[strlen(str2) - 1] = '\0';
    if (strcmp(str1, str2) == 0)
        printf("Equal, ");
    else
        printf("Not equal, ");
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            flag = 0;
            break;
        }
    }
    if (flag == 1 && strlen(str1) == strlen(str2))
        printf("Equal ignoring case, ");
    else
        printf("Not equal ignoring case, ");

    if (strcmp(str1, str2) == 0)
        printf("Strings are identical\n");
    else if (strcmp(str1, str2) < 0)
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    else
        printf("\"%s\" comes before \"%s\"\n", str2, str1);

    return 0;
}
