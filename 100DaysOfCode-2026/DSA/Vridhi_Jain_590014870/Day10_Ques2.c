#include <stdio.h>

int main() {
    char str[200];
    char result1[200], result2[200], result3[200];
    int i, j, start, end;
    
    printf("Enter string: ");
    scanf("%[^\n]", str);
    
    j = 0;
    for(i = 0; str[i]; i++) {
        if(str[i] != ' ') {
            result1[j++] = str[i];
        }
    }
    result1[j] = '\0';
    
    start = 0;
    while(str[start] == ' ') start++;
    end = 0;
    while(str[end]) end++;
    end--;
    while(end >= 0 && str[end] == ' ') end--;
    
    j = 0;
    for(i = start; i <= end; i++) {
        result2[j++] = str[i];
    }
    result2[j] = '\0';
    
    j = 0;
    for(i = start; i <= end; i++) {
        if(str[i] != ' ' || (j > 0 && result3[j-1] != ' ')) {
            result3[j++] = str[i];
        }
    }
    result3[j] = '\0';
    
    printf("Remove all: \"%s\", Trim: \"%s\", Single spaces: \"%s\"\n", result1, result2, result3);
    
    return 0;
}