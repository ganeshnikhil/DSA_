#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* compressString(const char* str) {
    int len = strlen(str);
    char* compressed = (char*)malloc(2 * len + 1); 
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

    if (strlen(compressed) >= len) {
        free(compressed);
        return strdup(str);
    }

    return compressed;
}

int main() {
    char input[] = "aabcccccaaa";
    char* result = compressString(input);
    printf("Output: %s\n", result);
    free(result);  
    return 0;
}
