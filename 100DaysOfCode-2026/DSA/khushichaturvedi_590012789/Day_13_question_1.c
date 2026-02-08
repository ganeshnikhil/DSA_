#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = 0, maxLen = 0, len = 0;
    char longest[100] = "";
    char word[100];

    for (int i = 0, j = 0; ; i++) {
        if (!isspace(str[i]) && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                count++;
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if (str[i] == '\0') break;
        }
    }

    printf("Word count: %d\n", count);
    printf("Longest word: %s\n", longest);
    return 0;
}
