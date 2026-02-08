#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2 || len1 == 0)
        return false;

    char temp[2000];
    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
