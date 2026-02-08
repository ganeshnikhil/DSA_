#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void compressString(const char *str) {
    int len = strlen(str), count = 1;
    char buffer[100] = "";
    int j = 0;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            j += sprintf(buffer + j, "%c%d", str[i - 1], count);
            count = 1;
        }
    }

    if (strlen(buffer) >= len)
        printf("%s\n", str);
    else
        printf("%s\n", buffer);
}

int main() {
    compressString("aabcccccaaa");  // a2b1c5a3
    return 0;
}
