#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

void compressString(char str[])
{
    int n = strlen(str);
    if (n == 0)
    {
        printf("Empty string\n");
        return;
    }

    char compressed[MAX];
    int compIndex = 0;

    for (int i = 0; i < n;)
    {
        char current = str[i];
        int count = 0;

        while (i < n && str[i] == current)
        {
            count++;
            i++;
        }
        compressed[compIndex++] = current;
        compIndex += sprintf(&compressed[compIndex], "%d", count);
    }

    compressed[compIndex] = '\0';
    if (strlen(compressed) < n)
    {
        printf("Compressed string: %s\n", compressed);
    }
    else
    {
        printf("Compressed string: %s\n", str);
    }
}

int main()
{
    char input[MAX];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    compressString(input);

    return 0;
}
