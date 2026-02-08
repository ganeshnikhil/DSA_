#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Function to preprocess the string by removing non-alphanumeric characters and converting to lowercase
void preprocessString(const char *input, char *output) 
{
    int i = 0, j = 0;
    while (input[i] != '\0') 
    {
        if (isalnum(input[i])) 
        {
            output[j++] = tolower(input[i]);
        }
        i++;
    }
    output[j] = '\0'; // Null-terminate the processed string
}

// Function to check if a string is a palindrome
bool isPalindrome(const char *str) 
{
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) 
    {
        if (str[left] != str[right]) 
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
    char input[1000];
    char processed[1000];
    
    printf("Enter a string to check if it's a palindrome (ignoring spaces and punctuation):\n");
    fgets(input, sizeof(input), stdin);
    
    // Removing the newline character if present
    input[strcspn(input, "\n")] = '\0';
    
    preprocessString(input, processed);
    
    printf("Processed string: %s\n", processed);
    
    if (isPalindrome(processed)) 
    {
        printf("The string is a palindrome!\n");
    } 
    else 
    {
        printf("The string is NOT a palindrome.\n");
    }
    
    return 0;
}