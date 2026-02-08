#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char s[100];
    char ns[100];
    char t[100];
    char ss[100];
    int i, j;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }
    j = 0;
    for (i = 0; s[i]; i++) 
    {
        if (!isspace(s[i])) 
        {
            ns[j++] = s[i];
        }
    }
    ns[j] = '\0';
    i = 0;
    while (isspace(s[i])) i++;
    strcpy(t, &s[i]);
    j = strlen(t) - 1;
    while (j >= 0 && isspace(t[j])) 
    {
        t[j--] = '\0';
    }
    j = 0;
    int sp = 0;
    for (i = 0; s[i]; i++) 
    {
        if (isspace(s[i])) 
        {
            if (!sp && j > 0) 
            {
                ss[j++] = ' ';
                sp = 1;
            }
        } 
        else 
        {
            ss[j++] = s[i];
            sp = 0;
        }
    }
    ss[j] = '\0';
    if (j > 0 && ss[j-1] == ' ') 
    {
        ss[j-1] = '\0';
    }
    printf("\nOriginal: '%s'\n", s);
    printf("No spaces: '%s'\n", ns);
    printf("Trimmed: '%s'\n", t);
    printf("Single spaces: '%s'\n", ss);
    return 0;
}
