#include <stdio.h>
#include <string.h>

char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + 32;
    return ch;
}

int equalsIgnoreCase(char a[], char b[]) {
    if (strlen(a) != strlen(b)) return 0;
    for (int i = 0; a[i]; i++) {
        if (toLowerChar(a[i]) != toLowerChar(b[i])) return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Equal, Equal ignoring case, Strings are identical\n");
    else {
        printf("Not equal, ");
        if (equalsIgnoreCase(str1, str2))
            printf("Equal ignoring case, ");
        else
            printf("Not equal ignoring case, ");

        if (strcmp(str1, str2) < 0)
            printf("\"%s\" comes before \"%s\"\n", str1, str2);
        else
            printf("\"%s\" comes before \"%s\"\n", str2, str1);
    }

    return 0;
}
