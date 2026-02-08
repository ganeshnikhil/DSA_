#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int freq[256] = {0};  
    int i, oddCount = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { 
            freq[str[i]]++;
        }
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount <= 1) {
        printf("true\n"); 
    } else {
        printf("false\n"); 
    }

    return 0;
}
