#include <stdio.h>
#include <string.h>
char firstNonRepeating(const char *s) {
    int freq[256] = {0};

    for (int i = 0; s[i]; i++) {
        freq[(unsigned char)s[i]]++;
    }

    for (int i = 0; s[i]; i++) {
        if (freq[(unsigned char)s[i]] == 1)
            return s[i];
    }

    return -1;
}
