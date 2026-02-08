#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isPalindrome(const char *s) 
{
    char filtered[1000];
    int len = 0;
    for (int i = 0; s[i]; i++)
        if (isalpha(s[i]))
            filtered[len++] = tolower(s[i]);
    for (int i = 0; i < len / 2; i++)
        if (filtered[i] != filtered[len - 1 - i])
            return 0;
    return 1;
}
int main() 
{
    char str[1000];
    gets(str);
    printf("%s\n", isPalindrome(str) ? "true" : "false");
    return 0;
}
