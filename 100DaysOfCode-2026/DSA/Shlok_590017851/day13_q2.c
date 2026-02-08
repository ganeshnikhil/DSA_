#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool canFormPalindrome(const char* str) 
{
    int freq[256] = {0};
    int oddCount = 0;
    for (int i = 0; str[i]; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] % 2 != 0) 
        {
            oddCount++;
            if (oddCount > 1)
                return false;
        }
    }
    return true;
}
int main() 
{
    printf("%s\n", canFormPalindrome("aab") ? "true" : "false");
    printf("%s\n", canFormPalindrome("abc") ? "true" : "false");
    printf("%s\n", canFormPalindrome("aabbcc") ? "true" : "false");
    return 0;
}
