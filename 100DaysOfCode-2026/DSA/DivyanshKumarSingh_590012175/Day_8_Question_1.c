#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    len = strlen(str);  

    char upper[1000], lower[1000];

    for (int i = 0; i < len; i++) 
    {
        upper[i] = toupper(str[i]);
        lower[i] = tolower(str[i]);
    }
    upper[len] = '\0';
    lower[len] = '\0';

    printf("Length: %zu, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n", len, str, upper, lower);

    return 0;
}
