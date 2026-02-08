#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int count[256] = {0}; 
    char result = -1;         
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);    
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        count[(unsigned char)str[i]]++;
    }    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (count[(unsigned char)str[i]] == 1) 
        {
            result = str[i];
            break;
        }
    }    
    if (result == -1) 
    {
        printf("No non-repeating character found\n");
    } 
    else 
    {
        printf("First non-repeating character: %c\n", result);
    }
    return 0;
}
