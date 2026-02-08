#include <stdio.h>
#include <string.h>

int main() {
    char str[201], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ch) count++;
    }

    printf("%d\n", count);
    return 0;
}