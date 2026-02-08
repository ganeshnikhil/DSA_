#include <stdio.h>
#include <string.h>
void removeDuplicates(char *str) {
    int seen[256] = {0};
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("%s\n", str);  // progamin
    return 0;
}
