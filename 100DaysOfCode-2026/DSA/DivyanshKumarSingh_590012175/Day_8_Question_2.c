#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
        str[len - 1] = '\0';

    printf("Enter the character to search for: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) count++;
    }

    printf("Character '%c' occurred %d times.\n", ch, count);

    return 0;
}
