#include <stdio.h>
#include <string.h>

int canFormPalindrome(char *str) {
    int freq[256] = {0};
    for (int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }

    int oddCount = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0) oddCount++;
    }

    return oddCount <= 1;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);

    if (canFormPalindrome(str))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
