#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100]; 
    char rev[100]; 
    int length;        
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);    
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }    
    length = strlen(str);    
    for (int i = 0; i < length; i++) 
    {
        rev[i] = str[length - 1 - i];
    }
    rev[length] = '\0';    
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", rev);
    return 0;
}
