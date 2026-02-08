#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(char* input) {
    int len = strlen(input);
    char compressed[2 * len + 1];  // worst case space
    int index = 0, count = 1;

    for (int i = 1; i <= len; i++) {
        if (input[i] == input[i - 1]) {
            count++;
        } else {
            index += sprintf(compressed + index, "%c%d", input[i - 1], count);
            count = 1;
        }
    }

    compressed[index] = '\0';

    if (strlen(compressed) < len) {
        printf("%s\n", compressed);
    } else {
        printf("%s\n", input);
    }
}

int main() {
    compressString("aabcccccaaa"); // a2b1c5a3
    compressString("abc");         // abc
    compressString("aabbcc");      // a2b2c2
    return 0;
}
