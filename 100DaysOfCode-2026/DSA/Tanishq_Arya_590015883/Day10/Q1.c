#include <stdio.h>
#include <string.h>

int caseInsensitiveCompare(char a, char b) {
    // Convert to lowercase
    if (a >= 'A' && a <= 'Z') a += 32;
    if (b >= 'A' && b <= 'Z') b += 32;
    
    return a - b;
}

void compareStrings(const char *str1, const char *str2) {
   
    if (strcmp(str1, str2) == 0) {
        printf("Equal, ");
    } else {
        printf("Not equal, ");
    }

    int i = 0;
    int caseInsensitiveEqual = 1;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (caseInsensitiveCompare(str1[i], str2[i])) {
            caseInsensitiveEqual = 0;
            break;
        }
        i++;
    }
    
    if (caseInsensitiveEqual) {
        printf("Equal ignoring case, ");
    } else {
        printf("Not equal ignoring case, ");
    }

    int lexOrder = strcmp(str1, str2);
    if (lexOrder < 0) {
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    } else if (lexOrder > 0) {
        printf("\"%s\" comes after \"%s\"\n", str1, str2);
    } else {
        printf("both strings are identical\n");
    }
}

int main() {
    char str1[100], str2[100];

    printf("String1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("String2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    compareStrings(str1, str2);

    return 0;
}
