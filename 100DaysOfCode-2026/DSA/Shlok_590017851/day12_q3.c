#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* compressString(const char* str) 
{
    int len = strlen(str);
    char* compressed = (char*)malloc(2 * len + 1); 
    int count = 1, j = 0;
    for (int i = 1; i <= len; i++) 
    {
        if (str[i] == str[i - 1]) 
        {
            count++;
        } 
        else 
        {
            compressed[j++] = str[i - 1];
            j += sprintf(&compressed[j], "%d", count);
            count = 1;
        }
    }
    compressed[j] = '\0';
    if (strlen(compressed) >= len) {
        strcpy(compressed, str); 
    }
    return compressed;
}
int main()
{
    char* result1 = compressString("aabcccccaaa");
    char* result2 = compressString("abc");
    char* result3 = compressString("aabbcc");
  
    printf("%s\n", result1); 
    printf("%s\n", result2); 
    printf("%s\n", result3); 

    free(result1);
    free(result2);
    free(result3);
    return 0;
}
