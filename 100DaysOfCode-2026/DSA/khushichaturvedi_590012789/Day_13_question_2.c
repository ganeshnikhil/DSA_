#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[256] = {0}, odd = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i]))
            freq[tolower(str[i])]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0)
            odd++;
    }

    if (odd <= 1)
        printf("Yes, a palindrome permutation is possible.\n");
    else
        printf("No, not possible.\n");

    return 0;
}
