#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char s1[100];
    char s2[100];
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
    int same = strcmp(s1, s2) == 0;
    int same_no_case = 1;
    if (strlen(s1) == strlen(s2)) 
    {
        for (int i = 0; s1[i]; i++) 
        {
            if (tolower(s1[i]) != tolower(s2[i])) 
            {
                same_no_case = 0;
                break;
            }
        }
    } 
    else 
    {
        same_no_case = 0;
    }
    printf("\nResults:\n");
    printf("Exact match: %s\n", same ? "Same" : "Different");
    printf("Ignore case match: %s\n", same_no_case ? "Same" : "Different");
    printf("Alphabetical order: ");
    if (strcmp(s1, s2) < 0) 
    {
        printf("'%s' comes first\n", s1);
    } 
    else if (strcmp(s1, s2) > 0) 
    {
        printf("'%s' comes first\n", s2);
    } 
    else 
    {
        printf("Same order\n");
    }
    return 0;
}
