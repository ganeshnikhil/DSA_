#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    printf("Length: %lu\n", strlen(str));
    printf("Original: \"%s\"\n", str);

    printf("Uppercase: \"");
    for (int i = 0; str[i]; i++) putchar(toupper(str[i]));
    printf("\"\n");

    printf("Lowercase: \"");
    for (int i = 0; str[i]; i++) putchar(tolower(str[i]));
    printf("\"\n");

    return 0;
}
