#include <stdio.h>
#include <string.h>

void reverseString(char* str) 
{
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) 
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() 
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    str[len - 1] = '\0';

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
