#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LENGTH 1000
#define CHAR_SET_SIZE 256

bool canFormPalindrome(const char *str) 
{
    int frequency[CHAR_SET_SIZE] = {0};
    int length = strlen(str);
    
    // Counting frequency of each character (case insensitive)
    for (int i = 0; i < length; i++) 
    {
        if (isalpha(str[i])) 
        {
            frequency[tolower(str[i])]++;
        } 
        else 
        {
            frequency[str[i]]++; // Including non-alphabetic characters
        }
    }
    
    int oddCount = 0;
    for (int i = 0; i < CHAR_SET_SIZE; i++) 
    {
        if (frequency[i] % 2 != 0) 
        {
            oddCount++;
        }
        // Early exit if more than one odd frequency
        if (oddCount > 1) 
        {
            return false;
        }
    }
    
    return true;
}

int main() 
{
    char input[MAX_LENGTH];
    
    printf("Enter a string to check for palindrome permutation: ");
    fgets(input, MAX_LENGTH, stdin);
    
    // Removing trailing newline if present
    input[strcspn(input, "\n")] = '\0';
    
    if (canFormPalindrome(input)) 
    {
        printf("\"%s\" can be rearranged into a palindrome.\n", input);
    } 
    else 
    {
        printf("\"%s\" cannot be rearranged into a palindrome.\n", input);
    }
    
    return 0;
}