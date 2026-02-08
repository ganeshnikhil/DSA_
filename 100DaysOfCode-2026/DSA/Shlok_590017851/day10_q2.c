#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removeAllSpaces(char *src, char *dest) 
{
    while (*src) 
    {
        if (*src != ' ')
            *dest++ = *src;
        src++;
    }
    *dest = '\0';
}
void trimSpaces(char *src, char *dest)
{
    while (*src == ' ') src++;
    char *end = src + strlen(src) - 1;
    while (end > src && *end == ' ') end--;
    *(end + 1) = '\0';

    strcpy(dest, src);
}
void singleSpacesOnly(char *src, char *dest) 
{
    int inSpace = 0;
    while (*src) {
        if (*src != ' ') 
        {
            *dest++ = *src;
            inSpace = 0;
        } 
        else if (!inSpace) 
        {
            *dest++ = ' ';
            inSpace = 1;
        }
        src++;
    }

    if (dest > src && *(dest - 1) == ' ')
        dest--;
    *dest = '\0';
}

int main() 
{
    char input[200];
    char noSpace[200], trimmed[200], singleSpaced[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    removeAllSpaces(input, noSpace);
    trimSpaces(input, trimmed);
    singleSpacesOnly(trimmed, singleSpaced);  
    printf("Remove all: \"%s\"\n", noSpace);
    printf("Trim: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", singleSpaced);
    return 0;
}
