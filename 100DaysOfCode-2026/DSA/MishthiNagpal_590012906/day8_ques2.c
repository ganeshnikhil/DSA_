#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("The character '%c' appears %d time(s) in the string.", ch, count);

    return 0;
}
