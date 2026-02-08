#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countWordsAndLongest(const char *str) {
    int count = 0, maxLen = 0, currLen = 0;
    const char *start = NULL, *longest = NULL;

    while (*str) {
        while (*str && isspace(*str)) str++; // Skip leading spaces
        if (*str) {
            count++;
            start = str;
            currLen = 0;
            while (*str && !isspace(*str)) {
                currLen++;
                str++;
            }
            if (currLen > maxLen) {
                maxLen = currLen;
                longest = start;
            }
        }
    }

    printf("Word count: %d, Longest word: \"", count);
    for (int i = 0; i < maxLen; i++) printf("%c", longest[i]);
    printf("\"\n");
}

int main() {
    const char *text = "  Java Python C++ ";
    countWordsAndLongest(text);
    return 0;
}
