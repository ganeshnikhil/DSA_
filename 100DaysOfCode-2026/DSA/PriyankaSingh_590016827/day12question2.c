#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char *str) 
{
    // Tracking seen characters (assuming ASCII)
    bool seen[256] = {false};
    int newIndex = 0;
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        // Getting ASCII value of current character
        int value = (unsigned char)str[i];
        
        // If character hasn't been seen before
        if (!seen[value]) 
        {
            seen[value] = true;
            str[newIndex++] = str[i];
        }
    }
    
    // Terminating the string
    str[newIndex] = '\0';
}

int main() 
{
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Removing newline
    
    removeDuplicates(input);
    
    printf("String after removing duplicates: %s\n", input);
    
    return 0;
}