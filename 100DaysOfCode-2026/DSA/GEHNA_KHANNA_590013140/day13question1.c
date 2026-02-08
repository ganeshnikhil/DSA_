#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    int i = 0, wordCount = 0, maxLen = 0, len = 0;
    char temp[100], longest[100];

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            temp[len++] = str[i];
        } else {
            if (len > 0) {
                temp[len] = '\0';
                wordCount++;
                if (len > maxLen) {
                    maxLen = len;
                    strcpy(longest, temp);
                }
                len = 0;
            }
        }
        i++;
    }
    if (len > 0) {
        temp[len] = '\0';
        wordCount++;
        if (len > maxLen) {
            strcpy(longest, temp);
        }
    }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: %s\n", longest);

    return 0;
}
