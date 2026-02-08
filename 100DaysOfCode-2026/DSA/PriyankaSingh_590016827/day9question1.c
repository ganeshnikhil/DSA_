#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *str) 
{
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) 
    {
        // Skipping non-alphabetic characters from left
        while (left < right && !isalpha(str[left])) 
        {
            left++;
        }
        // Skipping non-alphabetic characters from right
        while (left < right && !isalpha(str[right])) 
        {
            right--;
        }
        
        // Comparing characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) 
        {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() 
{
    char input[100];
    
    printf("Enter a string to check if it's a palindrome: ");
    fgets(input, sizeof(input), stdin);
    
    // Removing newline character if present
    input[strcspn(input, "\n")] = '\0';
    
    if (isPalindrome(input)) 
    {
        printf("'%s' is a palindrome.\n", input);
    } 
    else 
    {
        printf("'%s' is not a palindrome.\n", input);
    }
    
    return 0;
}