#include <stdio.h>
#include <string.h>

void Pal(char *s, char *r) 
{
    int n = strlen(s);
    int st = 0, max = 1;
    for (int i = 0; i < n; i++) 
    {
        int l = i, rt = i;
        while (l >= 0 && rt < n && s[l] == s[rt]) 
        {
            if (rt - l + 1 > max) 
            {
                st = l;
                max = rt - l + 1;
            }
            l--;
            rt++;
        }
        l = i;
        rt = i + 1;
        while (l >= 0 && rt < n && s[l] == s[rt]) 
        {
            if (rt - l + 1 > max) 
            {
                st = l;
                max = rt - l + 1;
            }
            l--;
            rt++;
        }
    }
    for (int i = 0; i < max; i++) 
    {
        r[i] = s[st + i];
    }
    r[max] = '\0';
}
int main() 
{
    char s[100];
    char r[100];
    printf("Enter the String : ");
    fgets(s, sizeof(s), stdin);
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }
    Pal(s, r);
    printf("Longest palindrome: %s\n", r);
    return 0;
}
