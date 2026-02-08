#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(char* str) {
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[--len] = '\0';
    }

    char compressed[2 * len + 1];
    int index = 0, count = 1;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[index++] = str[i - 1];
            index += sprintf(&compressed[index], "%d", count);
            count = 1;
        }
    }

    compressed[index] = '\0';

    if (strlen(compressed) < len)
        printf("Output: %s\n", compressed);
    else
        printf("Output: %s\n", str);
}

int main() {
    char input[1000];
    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);
    compressString(input);
    return 0;
}
