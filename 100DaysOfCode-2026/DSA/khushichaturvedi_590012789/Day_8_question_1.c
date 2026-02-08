#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("\nOriginal String: %s\n", str);
    printf("Length of String: %zu\n", len);
    char upperStr[1000];
    strcpy(upperStr, str);
    for (int i = 0; upperStr[i]; i++) {
        upperStr[i] = toupper(upperStr[i]);
    }
    printf("Uppercase: %s\n", upperStr);
    char lowerStr[1000];
    strcpy(lowerStr, str);
    for (int i = 0; lowerStr[i]; i++) {
        lowerStr[i] = tolower(lowerStr[i]);
    }
    printf("Lowercase: %s\n", lowerStr);
    return 0;
}
