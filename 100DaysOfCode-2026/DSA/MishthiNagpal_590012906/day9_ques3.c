#include<stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0}; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: '%c'\n", str[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}