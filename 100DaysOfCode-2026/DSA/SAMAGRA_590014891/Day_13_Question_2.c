#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];

    printf("Enter the string: ");  
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            freq[(unsigned char)str[i]]++;
        }
    }

    int oddCount = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount <= 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}