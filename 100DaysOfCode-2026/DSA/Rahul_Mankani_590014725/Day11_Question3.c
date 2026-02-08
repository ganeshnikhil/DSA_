#include <stdio.h>
#include <string.h>

int countPal(char *s) 
{
    int n = strlen(s);
    int total = 0;
    for (int i = 0; i < n; i++) 
    {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) 
        {
            total++;
            l--;
            r++;
        }
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) 
        {
            total++;
            l--;
            r++;
        }
    }
    return total;
}
int main() 
{
    char s[100];
    printf("Enter the String: ");
    fgets(s, sizeof(s), stdin);
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }
    int result = countPal(s);
    printf("Total palindromes: %d\n", result);
    return 0;
}
