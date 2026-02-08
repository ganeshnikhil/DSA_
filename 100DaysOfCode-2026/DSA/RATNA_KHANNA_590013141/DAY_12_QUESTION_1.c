#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) 
    {
        return 0; 
    }

    char temp[200]; 
    int i, j, k;
    
    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (j = 0; j < len1; j++) {
        temp[i + j] = str1[j];
    }
    temp[i + j] = '\0'; 
    for (i = 0; i <= 2 * len1 - len2; i++) 
    {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
