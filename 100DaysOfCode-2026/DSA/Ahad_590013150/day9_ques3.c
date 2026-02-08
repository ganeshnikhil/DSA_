#include <stdio.h>
#include <string.h>

char firstNonRepeatingChar(const char* str) {
    int freq[256] = {0};

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first non-repeating
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1)
            return str[i];
    }

    return -1; // Indicates no non-repeating character
}

int main() {
    char result;

    result = firstNonRepeatingChar("programming");
    if (result != -1)
        printf("First non-repeating: %c\n", result);
    else
        printf("-1\n");

    result = firstNonRepeatingChar("aabbcc");
    if (result != -1)
        printf("First non-repeating: %c\n", result);
    else
        printf("-1\n");

    result = firstNonRepeatingChar("abccba");
    if (result != -1)
        printf("First non-repeating: %c\n", result);
    else
        printf("-1\n");

    return 0;
}
