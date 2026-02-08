#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(const char *s1, const char *s2) {
    // Check if lengths are equal and not empty
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    
    if (len1 != len2 || len1 == 0) {
        return 0;
    }
    
    // Concatenate s1 with itself
    char *temp = malloc(2 * len1 + 1);
    strcpy(temp, s1);
    strcat(temp, s1);
    
    // Check if s2 is a substring of the concatenated string
    int result = (strstr(temp, s2) != NULL);
    
    free(temp);
    return result;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline
    
    if (isRotation(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }
    
    return 0;
}