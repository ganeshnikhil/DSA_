#include <stdio.h>
#include <string.h>
int isAlphabetic(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

int isPalindrome(char str[]) {
    char cleaned[100];
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isAlphabetic(str[i])) {
            cleaned[len++] = toLowerChar(str[i]);
        }
    }

    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) {
            return 0; 
        }
    }
    return 1; 

}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    if (isPalindrome(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
