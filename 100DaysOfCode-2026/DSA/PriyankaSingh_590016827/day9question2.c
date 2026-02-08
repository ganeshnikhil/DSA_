#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countVowelsAndConsonants(const char *str, int *vowels, int *consonants) 
{
    *vowels = 0;
    *consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char c = tolower(str[i]);
        
        if (isalpha(str[i])) 
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vowels)++;
            } 
            else 
            {
                (*consonants)++;
            }
        }
    }
}

int main() 
{
    char input[100];
    int vowelCount = 0, consonantCount = 0;
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Removing newline character if present
    input[strcspn(input, "\n")] = '\0';
    
    countVowelsAndConsonants(input, &vowelCount, &consonantCount);
    
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);
    printf("Total alphabetic characters: %d\n", vowelCount + consonantCount);
    
    return 0;
}