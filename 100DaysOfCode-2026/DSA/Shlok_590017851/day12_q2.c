#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void removeDuplicates(char* str)
{
    bool seen[256] = { false }; 
    int i, j = 0;

    for (i = 0; str[i]; i++) 
    {
        if (!seen[(unsigned char)str[i]]) 
        {
            seen[(unsigned char)str[i]] = true;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() 
{
    char str1[] = "programming";
    char str2[] = "hello";
    char str3[] = "aabbcc";

    removeDuplicates(str1);
    removeDuplicates(str2);
    removeDuplicates(str3);

    printf("%s\n", str1); 
    printf("%s\n", str2); 
    printf("%s\n", str3); 
    return 0;
}
