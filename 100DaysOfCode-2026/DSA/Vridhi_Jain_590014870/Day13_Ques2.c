#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    printf("Enter the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    int oddCount = 0;
    for (int i = 0; i < 256; i++) {
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
