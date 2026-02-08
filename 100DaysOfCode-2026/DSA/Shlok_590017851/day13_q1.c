#include <stdio.h>
#include <string.h>
#include <ctype.h>
void wordStats(const char* str) 
{
    int count = 0, maxLen = 0, len = 0;
    char longest[100] = "";
    char word[100];
    while (*str) 
    {
        while (*str && isspace(*str)) str++;

        len = 0;
        while (*str && !isspace(*str)) 
        {
            word[len++] = *str;
            str++;
        }

        if (len > 0) 
        {
            word[len] = '\0';
            count++;
            if (len > maxLen) 
            {
                maxLen = len;
                strcpy(longest, word);
            }
        }
    }
    printf("Word count: %d\n", count);
    printf("Longest word: \"%s\"\n", longest);
}
int main() 
{
    wordStats("Hello world programming");
    wordStats(" Java   Python C++ ");
    wordStats("a bb ccc dddd");
    return 0;
}
