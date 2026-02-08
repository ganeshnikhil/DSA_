#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char s[100]; 
    char long_word[100] = ""; 
    int word_count = 0; 
    int max_len = 0;     
    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);    
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }
    int i = 0;
    while (s[i]) 
    {
        // Spaces skip karne ke liye
        while (s[i] && isspace(s[i])) 
        {
            i++;
        }
        if (s[i]) 
        {
            word_count++;
            char curr_word[100];
            int j = 0;            
            while (s[i] && !isspace(s[i])) 
            {
                curr_word[j++] = s[i++];
            }
            curr_word[j] = '\0';
            // To check if current word is longest
            if (j > max_len) 
            {
                max_len = j;
                strcpy(long_word, curr_word);
            }
        }
    }    
    printf("Word count: %d\n", word_count);
    printf("Longest word: %s\n", long_word);
    return 0;
}
