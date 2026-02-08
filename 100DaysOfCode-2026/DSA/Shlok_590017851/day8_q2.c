#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i]; i++) 
    {
        if (str[i] == ch)
            count++;
    }
    printf("Output:\n%d\n", count);
    return 0;
}
