#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100], cleaned[100];
    int i, j = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Filter only alphabetic and make lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            cleaned[j++] = tolower((unsigned char)str[i]);
        }
    }
    cleaned[j] = '\0';

    int len = strlen(cleaned);
    int isPalindrome = 1;
    for (i = 0; i < len/2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("%s\n", isPalindrome ? "true" : "false");

    return 0;
}
