#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (str[len - 1] == '\n') str[--len] = '\0';

    printf("Reversed string: \"");
    for (int i = len - 1; i >= 0; i--) putchar(str[i]);
    printf("\"\n");

    return 0;
}
