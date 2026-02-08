#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    char upperStr[100], lowerStr[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
            break;
        upperStr[i] = toupper(str[i]);
        lowerStr[i] = tolower(str[i]);
        length++;
    }
    upperStr[length] = '\0';
    lowerStr[length] = '\0';
    printf("Original string: %s", str);
    printf("Length of string: %d\n", length);
    printf("Uppercase: %s\n", upperStr);
    printf("Lowercase: %s\n", lowerStr);

    return 0;
}
