#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: '%c'\n", str[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
