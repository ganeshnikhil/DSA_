#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "programming";
    int count[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("'%c'\n", str[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}