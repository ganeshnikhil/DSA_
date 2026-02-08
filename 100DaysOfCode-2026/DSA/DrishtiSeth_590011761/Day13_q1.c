#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int wordCount = 0, maxLen = 0, len = 0;
    char longest[1000], word[1000];
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                wordCount++;
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }
    if (j > 0) {
        word[j] = '\0';
        wordCount++;
        if (j > maxLen) {
            strcpy(longest, word);
        }
    }
    printf("Word count: %d\n", wordCount);
    printf("Longest word: \"%s\"\n", longest);
    return 0;
}
