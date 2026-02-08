#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Exactly equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    int same = 1;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (tolower(str1[i]) != tolower(str2[i]))
        {
            same = 0;
            break;
        }
    }
    if (str1[i] != str2[i])
        same = 0;
    if (same)
    {
        printf("Equal ignoring case\n");
    }
    else
    {
        printf("Not equal ignoring case\n");
    }

    if (strcmp(str1, str2) < 0)
    {
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    }
    else if (strcmp(str1, str2) > 0)
    {
        printf("\"%s\" comes after \"%s\"\n", str1, str2);
    }
    else
    {
        printf("Equal,\nEqual ignoring case,\nStrings are identical\n");
    }

    return 0;
}
