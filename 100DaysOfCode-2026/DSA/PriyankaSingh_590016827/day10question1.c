#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to compare strings case-insensitively
int case_insensitive_compare(const char *str1, const char *str2) 
{
    while (*str1 && *str2) 
    {
        if (tolower((unsigned char)*str1) != tolower((unsigned char)*str2)) 
        {
            return 0; // Not equal
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() 
{
    char str1[100], str2[100];
    
    // Input the string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline
    
    // Comparing strings
    printf("\nComparison Results:\n");
    
    // Exact equality check
    if (strcmp(str1, str2) == 0) 
    {
        printf("- The strings are exactly equal.\n");
    } 
    else 
    {
        printf("- The strings are not exactly equal.\n");
    }
    
    // Case-insensitive equality check
    if (case_insensitive_compare(str1, str2)) 
    {
        printf("- The strings are equal when ignoring case.\n");
    } 
    else 
    {
        printf("- The strings are not equal even when ignoring case.\n");
    }
    
    // Lexicographical order
    int cmp_result = strcmp(str1, str2);
    if (cmp_result < 0) 
    {
        printf("- \"%s\" comes before \"%s\" alphabetically.\n", str1, str2);
    } 
    else if (cmp_result > 0) 
    {
        printf("- \"%s\" comes before \"%s\" alphabetically.\n", str2, str1);
    }
    
    return 0;
}