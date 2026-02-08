#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
        len--;
    }

    printf("Length: %lu\n", len);
    printf("Original: \"%s\"\n", input);

    // Convert to uppercase
    printf("Uppercase: \"");
    for (int i = 0; input[i] != '\0'; i++) {
        putchar(toupper(input[i]));
    }
    printf("\"\n");

    // Convert to lowercase
    printf("Lowercase: \"");
    for (int i = 0; input[i] != '\0'; i++) {
        putchar(tolower(input[i]));
    }
    printf("\"\n");

    return 0;
} 
