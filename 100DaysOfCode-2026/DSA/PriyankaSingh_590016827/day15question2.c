#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() 
{
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_STRINGS) 
    {
        printf("Invalid number of strings.\n");
        return 1;
    }
    getchar(); // To consume the leftover newline

    char strings[MAX_STRINGS][MAX_LENGTH];

    // Input the strings 
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (fgets(strings[i], MAX_LENGTH, stdin) == NULL) 
        {
            printf("Error reading input.\n");
            return 1;
        }

        // Removing newline character if present
        size_t len = strlen(strings[i]);
        if (len > 0 && strings[i][len - 1] == '\n') 
        {
            strings[i][len - 1] = '\0';
        }
    }

    // Stable sort by string length (using bubble sort)
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (strlen(strings[j]) > strlen(strings[j + 1])) 
            {
                // Swapping strings[j] and strings[j + 1]
                char temp[MAX_LENGTH];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    // Output sorted strings
    printf("\nStrings sorted by length (shortest to longest):\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
