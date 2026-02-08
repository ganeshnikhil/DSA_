#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, case_diff = 0;
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if(strcmp(str1, str2) == 0) {
        printf("Equal, Equal ignoring case, Strings are identical\n");
        return 0;
    }
    
    printf("Not equal, ");
    
    if(strlen(str1) == strlen(str2)) {
        for(i = 0; str1[i]; i++) {
            char c1 = str1[i];
            char c2 = str2[i];
            if(c1 >= 'A' && c1 <= 'Z') c1 = c1 + 32;
            if(c2 >= 'A' && c2 <= 'Z') c2 = c2 + 32;
            if(c1 != c2) {
                case_diff = 1;
                break;
            }
        }
        if(!case_diff) {
            printf("Equal ignoring case, ");
        } else {
            printf("Not equal ignoring case, ");
        }
    } else {
        printf("Not equal ignoring case, ");
    }
    
    if(strcmp(str1, str2) < 0) {
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    } else {
        printf("\"%s\" comes before \"%s\"\n", str2, str1);
    }
    
    return 0;
}