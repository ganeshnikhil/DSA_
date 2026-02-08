#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char s[100]; 
    int count[256] = {0};     
    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);    
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }
    // Har character ka frequency count karne ke liye
    for (int i = 0; s[i]; i++) 
    {
        if (isalpha(s[i])) 
        {
            count[tolower(s[i])]++;
        }
    }
    // Odd frequency wale characters ke liye
    int odd = 0;
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] % 2 != 0) 
        {
            odd++;
        }
    }    
    if (odd <= 1) 
    {
        printf("String ka permutation palindrome ban sakta hai\n");
    } 
    else 
    {
        printf("String ka permutation palindrome nahi ban sakta\n");
    }
    return 0;
}
