#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) return false;

    char temp[2 * len1 + 1];  
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() {
    printf("%d\n", isRotation("abcde", "cdeab"));       
    printf("%d\n", isRotation("hello", "world"));      
    printf("%d\n", isRotation("waterbottle", "erbottlewat")); 
    return 0;
}
