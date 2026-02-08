#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[200];
    scanf("%s", str);

    int len = strlen(str);
    char compressed[400];
    int i = 0, j = 0;

    while (i < len) {
        char current = str[i];
        int count = 1;

        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        compressed[j++] = current;

        int digits = snprintf(compressed + j, sizeof(compressed) - j, "%d", count);
        j += digits;
        i++;
    }

    compressed[j] = '\0';

    if (j >= len)
        printf("%s\n", str);
    else
        printf("%s\n", compressed);

    return 0;
}
