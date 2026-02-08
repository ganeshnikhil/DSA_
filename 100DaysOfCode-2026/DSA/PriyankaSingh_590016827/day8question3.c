#include <stdio.h>
#include <string.h>

void reverseString(char str[]) 
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) 
    {
        // Swapping characters from start and end
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() 
{
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Removing newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    // Displaying the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}