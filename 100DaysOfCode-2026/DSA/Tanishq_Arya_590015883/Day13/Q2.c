#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 256

int canFormPalindrome(char *str) {
    int freq[MAX_CHAR] = {0};
    int i, oddCount = 0;

    for (i = 0; str[i]; i++) {
        if (!isspace(str[i])) {
            freq[(unsigned char)str[i]]++;
        }
    }

    for (i = 0; i < MAX_CHAR; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() {
    char str[1000];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
  
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    if (canFormPalindrome(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
