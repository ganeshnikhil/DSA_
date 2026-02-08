#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() 
{
    char str[100];
    char ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len=strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;  
    }
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = tolower(str[i]);
    }
    int j=len-1;
    for (int i = 0; i<len/2; i++) 
    {
        if (str[i] == str[j]) 
        {
            count++;
        }
        j--;
    }
    if(count==len/2)
    {
        printf("true:palindrome\n");
    }
    else
    {
        printf("false:not palindrome\n");
    }
    return 0;
}
