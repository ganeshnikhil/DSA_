#include <stdio.h>
#include <string.h>

void reverseWords(char *s, char *r) 
{
    char words[100][100]; 
    int word_count = 0;
    int i = 0, j = 0;
    // Words ko array mein daala
    while (s[i]) 
    {
        while (s[i] && isspace(s[i])) i++;
        if (!s[i]) break;
        int k = 0;
        while (s[i] && !isspace(s[i])) 
        {
            words[word_count][k++] = s[i++];
        }
        words[word_count][k] = '\0';
        word_count++;
    }
    // Words ko reverse order mein result mein daalne ke liye
    j = 0;
    for (int w = word_count - 1; w >= 0; w--) 
    {
        for (int k = 0; words[w][k]; k++) 
        {
            r[j++] = words[w][k];
        }
        if (w > 0) 
        {
            r[j++] = ' '; // Single space between words
        }
    }
    r[j] = '\0';
}
int main() 
{
    char s[100]; 
    char r[100]; 
    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);    
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }
    reverseWords(s, r);
    printf("Reversed words: %s\n", r);
    return 0;
}
