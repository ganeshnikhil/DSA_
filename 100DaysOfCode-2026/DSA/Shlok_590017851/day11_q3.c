#include <stdio.h>
#include <string.h>
int countFromCenter(const char *s, int left, int right) 
{
    int count = 0;
    int len = strlen(s);
    while (left >= 0 && right < len && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}
int countPalindromicSubstrings(const char *s)
{
    int total = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) 
    {
        total += countFromCenter(s, i, i);
        total += countFromCenter(s, i, i + 1);
    }
    return total;
}
int main() 
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int result = countPalindromicSubstrings(str);
    printf("Total palindromic substrings: %d\n", result);
    return 0;
}
