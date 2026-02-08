#include <stdio.h>
#include <string.h>

void compress(char *s, char *r) 
{
    int n = strlen(s);
    int j = 0; // Result string ka index
    int count = 1;
    if (n == 0) 
    {
        r[0] = '\0';
        return;
    }    
    for (int i = 0; i < n; i++) 
    {
        if (i < n - 1 && s[i] == s[i + 1]) 
        {
            count++;
        } 
        else 
        {
            r[j++] = s[i];
            if (count > 1) 
            {
                char num[10];
                sprintf(num, "%d", count);
                for (int k = 0; num[k]; k++) 
                {
                    r[j++] = num[k];
                }
            }
            count = 1;
        }
    }
    r[j] = '\0';
    // Agar compressed string badi hai toh original string wapas karega
    if (strlen(r) >= n) 
    {
        strcpy(r, s);
    }
}
int main() 
{
    char s[100];
    char r[100];    
    printf("Ek string daalo: ");
    fgets(s, sizeof(s), stdin);    
    if (s[strlen(s) - 1] == '\n') 
    {
        s[strlen(s) - 1] = '\0';
    }    
    compress(s, r);    
    printf("Compressed string: %s\n", r);
    return 0;
}
