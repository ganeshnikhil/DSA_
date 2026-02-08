#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], cleanStr[1000];
    int i, j = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleanStr[j] = tolower(str[i]);
            j++;
        }
    }
    cleanStr[j] = '\0'; 

    for (i = 0; i < j / 2; i++) {
        if (cleanStr[i] != cleanStr[j - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
