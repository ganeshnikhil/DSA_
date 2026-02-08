#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char *str) {
    bool seen[256] = {false}; 
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = true;
            str[index++] = str[i]; 
        }
    }
    str[index] = '\0'; 
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("Output: %s\n", str);
    return 0;
}
