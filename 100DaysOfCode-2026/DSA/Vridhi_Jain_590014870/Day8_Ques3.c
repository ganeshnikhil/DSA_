#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }

    rev[i] = '\0';

    printf("%s\n", rev);

    return 0;
}
