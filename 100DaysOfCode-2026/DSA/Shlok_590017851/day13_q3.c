#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverseWords(const char* str) 
{
    char words[100][100];  
    int wordCount = 0;
    int i = 0;
  
    while (*str)
      {
        while (*str && isspace(*str)) str++;
        if (*str == '\0') break;
        int j = 0;
        while (*str && !isspace(*str))
          {
            words[wordCount][j++] = *str++;
        }
        words[wordCount][j] = '\0';
        wordCount++;
    }
    for (i = wordCount - 1; i >= 0; i--)
      {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}
int main()
{
    reverseWords("Hello World Programming");     
    reverseWords("The quick brown fox");         
    reverseWords("   Java   Python   C++   ");  
    return 0;
}
