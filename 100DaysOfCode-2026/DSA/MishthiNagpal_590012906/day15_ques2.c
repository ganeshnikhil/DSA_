#include <stdio.h>
#include <string.h>

#define MAX 100
#define STR_LEN 100

int main()
{
    char strings[MAX][STR_LEN];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
    {
        fgets(strings[i], STR_LEN, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strlen(strings[j]) > strlen(strings[j + 1]))
            {
                char temp[STR_LEN];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    printf("\nStrings sorted by length:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
