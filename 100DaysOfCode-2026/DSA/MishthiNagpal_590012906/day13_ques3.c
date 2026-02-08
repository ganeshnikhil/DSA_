#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char words[100][100];
    int i = 0, j = 0, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            words[j][k++] = str[i];
        }
        else if (k > 0)
        {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    if (k > 0)
    {
        words[j][k] = '\0';
        j++;
    }

    for (int m = j - 1; m >= 0; m--)
    {
        printf("%s", words[m]);
        if (m > 0)
            printf(" ");
    }

    printf("\n");
    return 0;
}
