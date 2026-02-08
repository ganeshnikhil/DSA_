#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
  
    printf("Length: %lu\n", strlen(str));
    printf("Original: \"%s\"\n", str);

    printf("Uppercase: \"");
    for (int i = 0; str[i]; i++) printf("%c", toupper(str[i]));
    printf("\"\n");

    printf("Lowercase: \"");
    for (int i = 0; str[i]; i++) printf("%c", tolower(str[i]));
    printf("\"\n");
    return 0;
}
