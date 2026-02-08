#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0}, i, odd = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i]; i++) {
        if (str[i] != '\n')
            freq[(int)str[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0)
            odd++;
    }
    if (odd <= 1)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
