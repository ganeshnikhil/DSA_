#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeAllSpaces(char *str, char *result)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
        {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';
}

void trimAllSpaces(char *str, char *result)
{
    int start = 0, end = strlen(str) - 1;

    while (isspace(str[start]))
        start++;
    while (end > start && isspace(str[end]))
        end--;

    int j = 0;
    for (int i = start; i <= end; i++)
    {
        result[j++] = str[i];
    }
    result[j] = '\0';
}

void removeExtraSpaces(char *str, char *result)
{
    int i = 0, j = 0;
    int inSpace = 0;

    while (str[i] && isspace(str[i]))
        i++;

    while (str[i])
    {
        if (!isspace(str[i]))
        {
            result[j++] = str[i];
            inSpace = 0;
        }
        else if (!inSpace)
        {
            result[j++] = ' ';
            inSpace = 1;
        }
        i++;
    }

    if (j > 0 && result[j - 1] == ' ')
        j--;

    result[j] = '\0';
}

int main()
{
    char input[200];
    char allRemoved[200], trimmed[200], singleSpaced[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    removeAllSpaces(input, allRemoved);
    trimAllSpaces(input, trimmed);
    removeExtraSpaces(trimmed, singleSpaced);

    printf("Remove all spaces: \"%s\"\n", allRemoved);
    printf("Trim spaces: \"%s\"\n", trimmed);
    printf("Single spaces between words: \"%s\"\n", singleSpaced);

    return 0;
}
