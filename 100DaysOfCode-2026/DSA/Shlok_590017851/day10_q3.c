#include <stdio.h>
#include <string.h>
#include <ctype.h>
void countChars(const char *str, int freq[26]) 
{
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            freq[tolower(str[i]) - 'a']++;
        }
    }
}

int areAnagrams(const char *s1, const char *s2) 
{
    int freq1[26] = {0}, freq2[26] = {0};

    countChars(s1, freq1);
    countChars(s2, freq2);

    for (int i = 0; i < 26; i++) 
    {
        if (freq1[i] != freq2[i])
            return 0;
    }
    return 1;
}
int main() 
{
    char str1[100], str2[100];

    printf("Enter String1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  

    printf("Enter String2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  

    if (areAnagrams(str1, str2))
        printf("true\n");
    else
        printf("false\n");
  
    return 0;
}
