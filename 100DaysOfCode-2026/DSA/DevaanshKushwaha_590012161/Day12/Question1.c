#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2 || len1 == 0)
        return false;

    char concat[2 * len1 + 1]; // +1 for null terminator
    strcpy(concat, s1);
    strcat(concat, s1);

    return strstr(concat, s2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}
