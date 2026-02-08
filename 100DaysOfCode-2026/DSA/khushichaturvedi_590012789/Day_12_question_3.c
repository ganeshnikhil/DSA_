#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(char *str) {
    int len = strlen(str);
    char compressed[2 * len]; 
    int count = 1, j = 0;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[j++] = str[i - 1];
            j += sprintf(&compressed[j], "%d", count);
            count = 1;
        }
    }
    compressed[j] = '\0';

    if (strlen(compressed) < len)
        printf("Compressed: %s\n", compressed);
    else
        printf("Original (not compressed): %s\n", str);
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    compressString(str);
    return 0;
}
