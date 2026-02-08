#include <stdio.h>
#include <string.h>

int canFormPalindrome(const char *str) {
    int freq[256] = {0}, oddCount = 0;
    for (int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] % 2) oddCount++;
    }

    return oddCount <= 1;
}

int main() {
    const char *test = "aab";
    printf("%s\n", canFormPalindrome(test) ? "true" : "false");
    return 0;
}
