#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2))
        return 0;

    char concat[2000];
    strcpy(concat, str1);
    strcat(concat, str1);

    if (strstr(concat, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[1000], str2[1000];
    printf("Enter String1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String2: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
