#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0}, i, odd = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n')
            count[(int)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] % 2 != 0)
            odd++;
    }

    if (odd <= 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
