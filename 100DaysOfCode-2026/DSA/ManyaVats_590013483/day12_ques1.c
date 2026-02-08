#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char* str1, char* str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[] = "hello";
    char str2[] = "lohel";

    if (isRotation(str1, str2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
