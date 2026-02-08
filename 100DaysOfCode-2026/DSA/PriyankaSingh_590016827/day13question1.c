#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

void countWordsAndFindLongest(const char *str, int *wordCount, char *longestWord) 
{
    int length = strlen(str);
    int currentWordLength = 0;
    int maxWordLength = 0;
    int wordStart = 0;
    *wordCount = 0;
    
    // Initializing longestWord as empty string
    longestWord[0] = '\0';
    
    for (int i = 0; i <= length; i++) 
    {
        if (i == length || isspace(str[i])) 
        {
            // Ending of string or space found
            if (currentWordLength > 0) 
            {
                (*wordCount)++;
                
                if (currentWordLength > maxWordLength) 
                {
                    maxWordLength = currentWordLength;
                    // Copying the longest word
                    strncpy(longestWord, str + wordStart, maxWordLength);
                    longestWord[maxWordLength] = '\0';
                }
            }
            currentWordLength = 0;
        } 
        else 
        {
            if (currentWordLength == 0) 
            {
                wordStart = i; // Mark start of new word
            }
            currentWordLength++;
        }
    }
}

int main() 
{
    char input[MAX_LENGTH];
    int wordCount;
    char longestWord[MAX_LENGTH];
    
    printf("Enter a string: ");
    fgets(input, MAX_LENGTH, stdin);
    
    // Removing trailing newline if present
    input[strcspn(input, "\n")] = '\0';
    
    countWordsAndFindLongest(input, &wordCount, longestWord);
    
    printf("\nWord count: %d\n", wordCount);
    if (wordCount > 0) 
    {
        printf("Longest word: \"%s\" (length: %lu)\n", longestWord, strlen(longestWord));
    } 
    else 
    {
        printf("No words found.\n");
    }
    
    return 0;
}