#include <stdio.h>
#include <ctype.h>
int main() 
{
    char str[1000];
    int vowels = 0, consonants = 0;
    gets(str); 

    for (int i = 0; str[i]; i++) 
    {
        if (isalpha(str[i])) 
        {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
