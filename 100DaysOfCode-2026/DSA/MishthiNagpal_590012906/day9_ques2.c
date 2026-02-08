#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    printf("enter a string:");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Vowels %d and Consonants=%d", vowels, consonants);
}
