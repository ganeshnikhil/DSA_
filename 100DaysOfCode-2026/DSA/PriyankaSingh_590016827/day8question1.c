#include <stdio.h>
#include <ctype.h> // For toupper() and tolower()
#include <string.h> // For strlen()

int main() 
{
    char str[100];
    
    // Input the string 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    // Calculating string length
    int length = strlen(str);
    
    // Creating copies for case conversion
    char upper[100], lower[100];
    strcpy(upper, str);
    strcpy(lower, str);
    
    // Converting to uppercase and lowercase
    for(int i = 0; i < length; i++) 
    {
        upper[i] = toupper(upper[i]);
        lower[i] = tolower(lower[i]);
    }
    
    printf("\nOriginal string: %s\n", str);
    printf("String length: %d\n", length);
    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);
    
    return 0;
}