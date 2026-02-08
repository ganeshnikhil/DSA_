#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return false;
    }

    char concat[2 * len1 + 1]; 
    strcpy(concat, s1);
    strcat(concat, s1);

    return strstr(concat, s2) != NULL;
}

int main() {
    char s1[100], s2[100];

    printf("Enter String1: ");
    scanf("%s", s1);
    printf("Enter String2: ");
    scanf("%s", s2);

    if (isRotation(s1, s2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
