
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compareIgnoreCase(char s1[], char s2[]) {
    for (int i = 0; s1[i] && s2[i]; i++) {
        if (tolower(s1[i]) != tolower(s2[i]))
            return 0;
    }
    if (strlen(s1) != strlen(s2))
        return 0;
    return 1;
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("Equal, ");
    else
        printf("Not equal, ");

    if (compareIgnoreCase(str1, str2))
        printf("Equal ignoring case, ");
    else
        printf("Not equal ignoring case, ");

    int cmp = strcmp(str1, str2);
    if (cmp < 0)
        printf(""%s" comes before "%s"\n", str1, str2);
    else if (cmp > 0)
        printf(""%s" comes before "%s"\n", str2, str1);
    else
        printf("Strings are identical\n");

    return 0;
}
