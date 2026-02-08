#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* compressString(const char *str) {
    int len = strlen(str);
    if (len == 0) return strdup("");  // Handle empty string

    // Allocate enough space: worst case = original length * 2
    char *compressed = (char *)malloc(2 * len + 1);
    int index = 0;

    for (int i = 0; i < len;) {
        char current = str[i];
        int count = 0;
        while (i < len && str[i] == current) {
            count++;
            i++;
        }
        index += sprintf(compressed + index, "%c%d", current, count);
    }

    if (index >= len) {
        free(compressed); // Cleanup
        return strdup(str); // Return original if not smaller
    }

    return compressed;
}

int main() {
    char input[100];

    printf("Enter a string to compress: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline

    char *result = compressString(input);
    printf("Compressed string: %s\n", result);

    free(result);
    return 0;
}
