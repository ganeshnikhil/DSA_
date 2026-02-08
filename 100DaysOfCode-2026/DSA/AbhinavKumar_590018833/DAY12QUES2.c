#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char *str) {
    bool seen[256] = {false}; 
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            seen[ch] = true;
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

int main() {
    char str1[] = "programming";
    removeDuplicates(str1);
    printf("%s\n", str1);

    char str2[] = "hello";
    removeDuplicates(str2);
    printf("%s\n", str2);  

    char str3[] = "aabbcc";
    removeDuplicates(str3);
    printf("%s\n", str3); 

    return 0;
}
