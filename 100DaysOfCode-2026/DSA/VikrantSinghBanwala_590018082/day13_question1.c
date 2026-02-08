#include<stdio.h>
#include<string.h>
#include<ctype.h>
void cntWrdFindLgst(char *str, int *wordCount, char *longestWord) {
    char *token;
    *wordCount = 0;
    longestWord[0] = '\0';
    int maxLength = 0;
    token = strtok(str, " \t\n");
    while (token != NULL) {
        (*wordCount)++;
        int length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \t\n");
    }
}
int main() {
    char str1[] = "Hello world programming";
    int count1;
    char longest1[100];
    cntWrdFindLgst(str1, &count1, longest1);
    printf("Word count: %d, Longest word: \"%s\"\n", count1, longest1);

    char str2[] = " Java Python C++ ";
    int count2;
    char longest2[100];
    cntWrdFindLgst(str2, &count2, longest2);
    printf("Word count: %d, Longest word: \"%s\"\n", count2, longest2);
    return 0;
}