#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to remove all spaces from a string
void remove_all_spaces(char *str) 
{
    int count = 0;
    for (int i = 0; str[i]; i++) 
    {
        if (!isspace((unsigned char)str[i])) 
        {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

// Function to remove leading and trailing spaces (trim)
void trim_spaces(char *str) 
{
    int start = 0, end = strlen(str) - 1;
    
    // Finding first non-space character
    while (isspace((unsigned char)str[start])) 
    {
        start++;
    }
    
    // Finding last non-space character
    while (end >= 0 && isspace((unsigned char)str[end])) 
    {
        end--;
    }
    
    // Shifting characters to beginning
    int count = 0;
    for (int i = start; i <= end; i++) 
    {
        str[count++] = str[i];
    }
    str[count] = '\0';
}

// Function to remove extra spaces between words (leave single spaces)
void remove_extra_spaces(char *str) 
{
    int count = 0;
    int space_flag = 0; // Flag to track if previous character was space
    
    for (int i = 0; str[i]; i++) 
    {
        if (!isspace((unsigned char)str[i])) 
        {
            str[count++] = str[i];
            space_flag = 0;
        } 
        else 
        {
            if (!space_flag) 
            {
                str[count++] = ' '; // Keeping one space
                space_flag = 1;
            }
        }
    }
    
    // Removing trailing space if any
    if (count > 0 && isspace((unsigned char)str[count-1])) 
    {
        count--;
    }
    
    str[count] = '\0';
}

int main() 
{
    char input[256];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Removing trailing newline
    
    // Making copies for each operation
    char all_spaces[256];
    char trimmed[256];
    char single_spaces[256];
    
    strcpy(all_spaces, input);
    strcpy(trimmed, input);
    strcpy(single_spaces, input);
    
    // Performing operations
    remove_all_spaces(all_spaces);
    trim_spaces(trimmed);
    remove_extra_spaces(single_spaces);
  
    printf("\nOriginal string: \"%s\"\n", input);
    printf("1. After removing ALL spaces: \"%s\"\n", all_spaces);
    printf("2. After trimming (leading/trailing spaces): \"%s\"\n", trimmed);
    printf("3. After removing extra spaces between words: \"%s\"\n", single_spaces);
    
    return 0;
}