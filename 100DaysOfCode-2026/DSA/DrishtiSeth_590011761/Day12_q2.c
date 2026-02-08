
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0, seen[256] = {0};
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}
