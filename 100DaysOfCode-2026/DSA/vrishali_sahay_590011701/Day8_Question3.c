#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    printf("Reversed string: \"");
    for (int i = (int)len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\"\n");
    return 0;
}