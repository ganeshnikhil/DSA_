#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 1000

void longestPalindromicSubstring(char str[])
{
    int n = strlen(str);
    if (n == 0)
    {
        printf("Empty string\n");
        return;
    }

    bool dp[MAX_LEN][MAX_LEN] = {false};

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < n; i++)
        dp[i][i] = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            dp[i][i + 1] = true;
            start = i;
            maxLen = 2;
        }
    }

    for (int len = 3; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;

            if (str[i] == str[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = true;

                if (len > maxLen)
                {
                    start = i;
                    maxLen = len;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++)
    {
        putchar(str[i]);
    }
    printf("\n");
}

int main()
{
    char input[MAX_LEN];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    longestPalindromicSubstring(input);

    return 0;
}
