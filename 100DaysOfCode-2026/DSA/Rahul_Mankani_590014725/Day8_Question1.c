#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];     
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);    
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }    
    int length = strlen(str);
    printf("Length of the string: %d\n", length);    
    char upper[100];
    strcpy(upper, str);
    for (int i = 0; upper[i] != '\0'; i++) 
    {
        if (upper[i] >= 'a' && upper[i] <= 'z') 
        {
            upper[i] = upper[i] - 32; 
        }
    }
    printf("Uppercase string: %s\n", upper);    
    char lower[100];
    strcpy(lower, str);
    for (int i = 0; lower[i] != '\0'; i++) 
    {
        if (lower[i] >= 'A' && lower[i] <= 'Z') 
        {
            lower[i] = lower[i] + 32; 
        }
    }
    printf("Lowercase string: %s\n", lower);    
    printf("Original string: %s\n", str);
    return 0;
}
