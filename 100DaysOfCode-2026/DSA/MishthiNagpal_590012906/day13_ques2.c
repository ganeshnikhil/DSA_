#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256  
int canFormPalindrome(char *str) 
{
    int freq[MAX] = {0};
    
    for (int i = 0; str[i]; i++) 
    {
        if (!isspace(str[i])) 
        { 
            freq[(unsigned char)str[i]]++;
        }
    }

    int oddCount = 0;
    for (int i = 0; i < MAX; i++) 
    {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() 
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    if (canFormPalindrome(str)) 
    {
        printf("true");
    } 
    else 
    {
        printf("false");
    }

    return 0;
}
