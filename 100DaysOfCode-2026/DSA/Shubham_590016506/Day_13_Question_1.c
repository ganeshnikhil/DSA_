#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countwordsandlongest(char str[]) {
    int count = 0, maxlen = 0;
    char longest[100] = "", word[100];
    int i = 0, j = 0;

    while(str[i]) {
        while(str[i] && isspace(str[i])) i++;

        j = 0;
        while(str[i] && !isspace(str[i])) {
            word[j++] = str[i++];
        }

        if(j > 0) {
            word[j] = '\0';
            count++;
            if(j > maxlen) {
                maxlen = j;
                strcpy(longest, word);
            }
        }
    }

    printf("Word count: %d\n", count);
    printf("Longest word: \"%s\"\n", longest);
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    countwordsandlongest(str);
    return 0;
}

