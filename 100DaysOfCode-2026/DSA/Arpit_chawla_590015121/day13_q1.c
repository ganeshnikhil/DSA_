#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0, wordCount = 0, maxLen = 0, len = 0;
    char longestWord[1000], currentWord[1000];
    
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            currentWord[len++] = str[i];
        } else {
            if (len > 0) {
                currentWord[len] = '\0';
                wordCount++;
                if (len > maxLen) {
                    maxLen = len;
                    strcpy(longestWord, currentWord);
                }
                len = 0;
            }
        }
        i++;
    }

    if (len > 0) {
        currentWord[len] = '\0';
        wordCount++;
        if (len > maxLen) {
            strcpy(longestWord, currentWord);
        }
    }

    printf("Word Count: %d\n", wordCount);
    printf("Longest Word: %s\n", longestWord);

    return 0;
}
