#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100]; 
    char ch;       
    int count = 0;     
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);    
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }    
    printf("Enter a character to count: ");
    scanf(" %c", &ch); 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            count++;
        }
    }    
    printf("The character '%c' appears %d time(s) in the string.\n", ch, count);
    return 0;
}
