// 2. Palindrome Permutation Check
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char str[] = "aab";
    int freq[256] = {0}, oddCount = 0;
    for (int i = 0; str[i]; i++) if (str[i] != ' ') freq[(unsigned char)str[i]]++;
    for (int i = 0; i < 256; i++) if (freq[i] % 2) oddCount++;
    printf("%s\n", oddCount <= 1 ? "true" : "false");
    return 0;
}

