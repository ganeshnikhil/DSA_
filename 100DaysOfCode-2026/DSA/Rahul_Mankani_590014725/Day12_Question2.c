#include <stdio.h>
#include <string.h>

void Duplicates(char *s, char *r) 
{
    int seen[256] = {0}; 
    int j = 0; // Result string ka index
    for (int i = 0; s[i]; i++) 
    {
        if (!seen[(unsigned char)s[i]]) 
        {
            seen[(unsigned char)s[i]] = 1;
            r[j++] = s[i];
        }
    }
    r[j] = '\0'; 
}
int main() 
{
    char s[100];
    char r[100];    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);    
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }   
    Duplicates(s, r);    
    printf("String after removing duplicates: %s\n", r);
    return 0;
}
