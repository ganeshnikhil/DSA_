#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canFormPalindrome(char *str) {
    int freq[256] = {0};
    for (int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }

    int oddCount = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() {
    printf("%d\n", canFormPalindrome("aab")); 
    printf("%d\n", canFormPalindrome("abc"));    
    printf("%d\n", canFormPalindrome("aabbcc"));
    return 0;
}
