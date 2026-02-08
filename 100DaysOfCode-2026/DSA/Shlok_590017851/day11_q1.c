#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isPalindrome(char *s) 
{
    int left = 0, right = strlen(s) - 1;
    while (left < right)
      {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        if (tolower(s[left]) != tolower(s[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}
int main() 
{
    char str[] = "A man, a plan, a canal: Panama";
    if (isPalindrome(str))
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
