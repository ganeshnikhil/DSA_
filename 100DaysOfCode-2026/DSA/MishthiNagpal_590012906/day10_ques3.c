#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256

void cleanString(char *src, char *dest)
{
    int i = 0, j = 0;
    while (src[i])
    {
        if (!isspace(src[i]))
        {
            dest[j++] = tolower(src[i]);
        }
        i++;
    }
    dest[j] = '\0';
}

int areAnagrams(char *str1, char *str2)
{
    char clean1[100], clean2[100];
    int freq1[MAX] = {0}, freq2[MAX] = {0};

    cleanString(str1, clean1);
    cleanString(str2, clean2);

    if (strlen(clean1) != strlen(clean2))
    {
        return 0;
    }

    for (int i = 0; clean1[i]; i++)
    {
        freq1[(int)clean1[i]]++;
        freq2[(int)clean2[i]]++;
    }

    for (int i = 0; i < MAX; i++)
    {
        if (freq1[i] != freq2[i])
            return 0;
    }

    return 1;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
