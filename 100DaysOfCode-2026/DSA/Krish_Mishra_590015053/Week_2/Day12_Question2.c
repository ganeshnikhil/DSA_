#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char* str) {
    bool seen[256] = { false };
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') continue;
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = true;
            str[index++] = str[i];
        }
    }

    str[index] = '\0';
    printf("Output: %s\n", str);
}

int main() {
    char input[1000];
    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);
    removeDuplicates(input);
    return 0;
}
