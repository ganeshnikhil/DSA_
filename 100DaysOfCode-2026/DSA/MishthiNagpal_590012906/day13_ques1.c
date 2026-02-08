#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = 0;
    int maxLength = 0;
    char longestWord[100] = "";

    int i = 0, len = strlen(str);
    while (i < len) 
    {
        while (i < len && isspace(str[i])) 
        {
            i++;
        }

        int start = i;
        while (i < len && !isspace(str[i])) 
        {
            i++;
        }

        int wordLen = i - start;

        if (wordLen > 0) 
        {
            wordCount++;

            if (wordLen > maxLength) 
            {
                maxLength = wordLen;
                strncpy(longestWord, &str[start], wordLen);
                longestWord[wordLen] = '\0'; 
            }
        }
    }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);

    return 0;
}
