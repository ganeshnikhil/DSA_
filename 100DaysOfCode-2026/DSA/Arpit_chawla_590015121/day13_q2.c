#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int freq[256] = {0};
    int i = 0;

    while (str[i]) {
        if (!isspace(str[i])) {
            char ch = tolower(str[i]);
            freq[(int)ch]++;
        }
        i++;
    }

    int oddCount = 0;
    for (i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount <= 1) {
        printf("Yes, a palindrome permutation is possible.\n");
    } else {
        printf("No, a palindrome permutation is not possible.\n");
    }

    return 0;
}
