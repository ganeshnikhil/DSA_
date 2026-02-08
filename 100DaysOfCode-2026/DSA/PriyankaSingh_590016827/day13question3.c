#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 1000

void reverseWords(char *str) 
{
    int length = strlen(str);
    
    // At first, reversing the entire string
    for (int i = 0, j = length - 1; i < j; i++, j--) 
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    // Then reversing each individual word
    int wordStart = 0;
    for (int i = 0; i <= length; i++) 
    {
        if (i == length || str[i] == ' ') 
        {
            // Reversing the current word
            for (int j = wordStart, k = i - 1; j < k; j++, k--) 
            {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            wordStart = i + 1;
        }
    }
    
    // Handling multiple spaces by compacting to single spaces
    int writePos = 0;
    bool inSpace = false;
    for (int i = 0; i < length; i++) 
    {
        if (str[i] == ' ') 
        {
            if (!inSpace) 
            {
                str[writePos++] = ' ';
                inSpace = true;
            }
        } 
        else 
        {
            str[writePos++] = str[i];
            inSpace = false;
        }
    }
    str[writePos] = '\0';
    
    // Trim leading/trailing spaces if any
    while (writePos > 0 && str[writePos - 1] == ' ') 
    {
        str[--writePos] = '\0';
    }
    if (writePos > 0 && str[0] == ' ') 
    {
        memmove(str, str + 1, writePos);
        str[--writePos] = '\0';
    }
}

int main() 
{
    char input[MAX_LENGTH];
    
    printf("Enter a string to reverse words: ");
    fgets(input, MAX_LENGTH, stdin);
    
    // Removing trailing newline if present
    input[strcspn(input, "\n")] = '\0';
    
    reverseWords(input);
    
    printf("Reversed words: \"%s\"\n", input);
    
    return 0;
}