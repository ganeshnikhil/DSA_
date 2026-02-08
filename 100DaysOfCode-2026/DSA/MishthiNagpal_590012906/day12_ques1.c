#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2))
        return false;

    char combined[2000];  
    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL)
        return true;
    else
        return false;
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  

    if (isRotation(str1, str2))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
