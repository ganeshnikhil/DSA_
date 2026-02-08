#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wordCountAndLongest(char *str) {
    int maxLen = 0, count = 0;
    char longest[100] = "";
    char word[100];
    int i = 0, j = 0;

    while (str[i] != '\0') {
        while (str[i] == ' ') i++;

        j = 0;
        while (str[i] != '\0' && str[i] != ' ') {
            word[j++] = str[i++];
        }

        word[j] = '\0';

        if (j > 0) {
            count++;
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
        }
    }

    printf("Word count: %d\n", count);
    printf("Longest word: \"%s\"\n", longest);
}

int main() {
    wordCountAndLongest("Hello world programming");
    wordCountAndLongest(" Java Python C++ ");
    wordCountAndLongest("a bb ccc dddd");
    return 0;
}
