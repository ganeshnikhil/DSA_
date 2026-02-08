#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100]; 
    char clean[100]; 
    int j = 0;    
    printf("Ek string daalo: ");
    fgets(str, sizeof(str), stdin);    
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }
    // Sirf letters aur numbers ko clean array mein daalo (lowercase mein)
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isalnum(str[i])) 
        {
            clean[j] = tolower(str[i]);
            j++;
        }
    }
    clean[j] = '\0'; 
    
    int palindrome = 1; 
    int len = strlen(clean);
    for (int i = 0; i < len / 2; i++) 
    {
        if (clean[i] != clean[len - 1 - i]) 
        {
            palindrome = 0; 
            break;
        }
    }    
    printf("Original string: %s\n", str);
    if (palindrome) 
    {
        printf("Yeh string palindrome hai.\n");
    } 
    else 
    {
        printf("Yeh string palindrome nahi hai.\n");
    }
    return 0;
}
