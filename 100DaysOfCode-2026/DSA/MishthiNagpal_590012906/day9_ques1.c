#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[])
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        while (left < right && !isalpha(str[left]))
        {
            left++;
        }
        while (left < right && !isalpha(str[right]))
        {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    char input[100];
    printf("enter a string:");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
    }

    if (isPalindrome(input))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
