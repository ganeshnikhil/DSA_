#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char s1[100];
    char s2[100];
    int count[26] = {0};
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    if (s1[strlen(s1) - 1] == '\n') 
    {
        s1[strlen(s1) - 1] = '\0';
    }
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    if (s2[strlen(s2) - 1] == '\n') 
    {
        s2[strlen(s2) - 1] = '\0';
    }
    for (int i = 0; s1[i]; i++) 
    {
        if (isalpha(s1[i])) 
        {
            count[tolower(s1[i]) - 'a']++;
        }
    }
    for (int i = 0; s2[i]; i++) 
    {
        if (isalpha(s2[i])) 
        {
            count[tolower(s2[i]) - 'a']--;
        }
    }
    int anagram = 1;
    for (int i = 0; i < 26; i++) 
    {
        if (count[i] != 0) 
        {
            anagram = 0;
            break;
        }
    }
    printf("\nResult: %s\n", anagram ? "Anagrams" : "Not anagrams");
    return 0;
}
