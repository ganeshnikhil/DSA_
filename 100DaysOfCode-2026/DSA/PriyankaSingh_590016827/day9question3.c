#include <stdio.h>
#include <limits.h>
#include <string.h>

#define CHAR_RANGE 256

int firstNonRepeatingChar(const char *str) 
{
    int frequency[CHAR_RANGE] = {0};
    int len = strlen(str);
    
    // Building frequency count
    for (int i = 0; i < len; i++) 
    {
        frequency[(unsigned char)str[i]]++;
    }
    
    // Finding first character with frequency 1
    for (int i = 0; i < len; i++) 
    {
        if (frequency[(unsigned char)str[i]] == 1) 
        {
            return str[i];
        }
    }
    
    return -1; // No non-repeating character found
}

int main() 
{
    char input[1000];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Removing newline character if present
    input[strcspn(input, "\n")] = '\0';
    
    int result = firstNonRepeatingChar(input);
    
    if (result == -1) 
    {
        printf("All characters repeat or string is empty\n");
    } 
    else 
    {
        printf("First non-repeating character: '%c'\n", result);
    }
    
    return 0;
}