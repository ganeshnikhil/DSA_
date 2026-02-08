#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int wordCount = 0;
    char longestWord[1000] = "";
    int maxLen = 0;

    char word[1000];
    int i = 0, j = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                wordCount++;

                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longestWord, word);
                }
                j = 0;
            }
        }

        if (str[i] == '\0') break;
        i++;
    }

    printf("Word count: %d, Longest word: \"%s\"\n", wordCount, longestWord);
    return 0;
}
