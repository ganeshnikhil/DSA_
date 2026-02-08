#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverseWords(char *str) {
    if (str == NULL) return; 
    int len = strlen(str);
    char result[len + 1];
    int resultIndex = 0; 
    int end = len - 1; 
    while (end >= 0) {
        while (end >= 0 && isspace(str[end])) end--;
        if (end < 0) break;  
        int start = end;
        while (start >= 0 && !isspace(str[start])) start--;   
        for (int i = start + 1; i <= end; i++) {
            result[resultIndex++] = str[i];
        }    
        if (start > 0) {
            result[resultIndex++] = ' ';
        }    
        end = start - 1;
    }
    result[resultIndex] = '\0';
    strcpy(str, result);
}
int main() {
    char str1[] = "Hello World Programming";
    reverseWords(str1);
    printf("\"%s\"\n", str1);
    char str2[] = "The quick brown fox";
    reverseWords(str2);
    printf("\"%s\"\n", str2);
    char str3[] = "   Multiple   spaces   in   between   ";
    reverseWords(str3);
    printf("\"%s\"\n", str3);   
    return 0;
}