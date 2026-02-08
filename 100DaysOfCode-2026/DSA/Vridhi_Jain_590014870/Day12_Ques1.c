#include <stdio.h>
#include <string.h>

int isRotation(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    if (len1 != len2) {
        return 0;
    }
    
    if (len1 == 0) {
        return 1;
    }
    
    int i, j, k;
    for (i = 0; i < len1; i++) {
        int match = 1;
        for (j = 0; j < len1; j++) {
            k = (i + j) % len1;
            if (s1[k] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    char string1[100];
    char string2[100];
    
    printf("Enter first string: ");
    scanf("%s", string1);
    
    printf("Enter second string: ");
    scanf("%s", string2);
    
    if (isRotation(string1, string2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}