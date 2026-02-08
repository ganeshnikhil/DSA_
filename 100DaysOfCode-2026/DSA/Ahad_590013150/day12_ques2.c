#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char* str) {
    int len = strlen(str);
    bool seen[256] = { false };
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
    char str1[] = "programming";
    removeDuplicates(str1);
    printf("%s\n", str1); // progamin

    char str2[] = "hello";
    removeDuplicates(str2);
    printf("%s\n", str2); // helo

    char str3[] = "aabbcc";
    removeDuplicates(str3);
    printf("%s\n", str3); // abc

    return 0;
}
