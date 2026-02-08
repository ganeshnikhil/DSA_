#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000
int countFromCenter(char str[], int left, int right, int n)
{
    int count = 0;
    while (left >= 0 && right < n && str[left] == str[right])
    {
        count++;
        left--;
        right++;
    }
    return count;
}

int countAllPalindromicSubstrings(char str[])
{
    int n = strlen(str);
    int total = 0;

    for (int center = 0; center < n; center++)
    {
        total += countFromCenter(str, center, center, n);

        total += countFromCenter(str, center, center + 1, n);
    }

    return total;
}

int main()
{
    char input[MAX_LEN];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int result = countAllPalindromicSubstrings(input);
    printf("Total Palindromic Substrings: %d\n", result);

    return 0;
}
