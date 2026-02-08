#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end)
      {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed string: \"%s\"\n", str);
    return 0;
}
