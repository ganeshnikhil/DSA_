#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char input[100];
    char alpha[100];
    char reverse[100];
    int index = 0;
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    if (input[strlen(input) - 1] == '\n') 
    {
        input[strlen(input) - 1] = '\0';
    }
    for (int i = 0; input[i] != '\0'; i++) 
    {
        if (isalpha(input[i])) 
        {
            alpha[index] = tolower(input[i]);
            index++;
        }
    }
    alpha[index] = '\0';
    int len = strlen(alpha);
    for (int i = 0; i < len; i++) 
    {
        reverse[i] = alpha[len - 1 - i];
    }
    reverse[len] = '\0';
    int palindrome = 1;
    if (strcmp(alpha, reverse) != 0) 
    {
        palindrome = 0;
    }
    printf("Original string: %s\n", input);
    if (palindrome) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
