#include <stdio.h>
#include <string.h>
void printLongestPalindrome(char*s) 
{
    int n=strlen(s);
    int start=0, maxLen=1;
    int dp[n][n]; 
    memset(dp,0,sizeof(dp));
    for (int i=0;i<n;i++)
        dp[i][i]=1;
    for (int i=0;i<n-1;i++) 
    {
        if (s[i]==s[i+1]) 
        {
            dp[i][i+1]=1;
            start=i;
            maxLen=2;
        }
    }
    for (int len=3;len<=n;len++) 
    {
        for (int i=0;i<=n-len;i++) 
        {
            int j=i+len-1;
            if (s[i]==s[j] && dp[i+1][j-1])
            {
                dp[i][j]=1;
                if (len>maxLen)
                {
                    start=i;
                    maxLen=len;
                }
            }
        }
    }
    printf("Longest Palindromic Substring: ");
    for (int i=start;i<start+maxLen;i++)
        putchar(s[i]);
    printf("\n");
}
int main() 
{
    char str[] = "babad";
    printLongestPalindrome(str);
    return 0;
}
