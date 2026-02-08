#include <stdio.h>
#include <string.h>
#include <ctype.h>
int compareIgnoreCase(char *a, char *b) 
{
    while (*a && *b) 
    {
        if (tolower(*a) != tolower(*b))
            return tolower(*a) - tolower(*b);
        a++;
        b++;
    }
    return tolower(*a) - tolower(*b);
}

int main()
{
    char str1[100], str2[100];
    printf("Enter String1: ");
    gets(str1);  
    printf("Enter String2: ");
    gets(str2);

  if (strcmp(str1, str2) == 0)
  {
        printf("Equal, Equal ignoring case, Strings are identical\n");
    } else 
  {
        printf("Not equal, ");
        if (compareIgnoreCase(str1, str2) == 0)
            printf("Equal ignoring case, ");
        else
            printf("Not equal ignoring case, ");
        if (strcmp(str1, str2) < 0)
            printf("\"%s\" comes before \"%s\"\n", str1, str2);
        else
            printf("\"%s\" comes before \"%s\"\n", str2, str1);
    }
    return 0;
}
