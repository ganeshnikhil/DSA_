#include <stdio.h>
#include <string.h>

int isSpace(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

void countWords(char *text, int *wordCount, char *longestWord) {
    int len = strlen(text);
    int count = 0;
    int maxLen = 0;
    int currentLen = 0;
    int wordStart = 0;
    int inWord = 0;
    
    longestWord[0] = '\0';
    
    for (int i = 0; i <= len; i++) {
        if (i == len || isSpace(text[i])) {
            if (inWord) {
                count++;
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                    for (int j = 0; j < currentLen; j++) {
                        longestWord[j] = text[wordStart + j];
                    }
                    longestWord[currentLen] = '\0';
                }
                inWord = 0;
                currentLen = 0;
            }
        } else {
            if (!inWord) {
                inWord = 1;
                wordStart = i;
            }
            currentLen++;
        }
    }
    
    *wordCount = count;
}

int main() {
    char text1[] = "Hello world programming";
    char text2[] = " Java Python C++ ";
    char text3[] = "a bb ccc dddd";
    
    int wordCount;
    char longestWord[100];
    
    countWords(text1, &wordCount, longestWord);
    printf("Input: \"%s\"\n", text1);
    printf("Output: Word count: %d, Longest word: \"%s\"\n\n", wordCount, longestWord);
    
    countWords(text2, &wordCount, longestWord);
    printf("Input: \"%s\"\n", text2);
    printf("Output: Word count: %d, Longest word: \"%s\"\n\n", wordCount, longestWord);
    
    countWords(text3, &wordCount, longestWord);
    printf("Input: \"%s\"\n", text3);
    printf("Output: Word count: %d, Longest word: \"%s\"\n\n", wordCount, longestWord);
    
    return 0;
}