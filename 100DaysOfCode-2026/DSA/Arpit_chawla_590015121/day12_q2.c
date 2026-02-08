#include <stdio.h>

int main() {
    char str[200], result[200];
    int seen[256] = {0};
    int i = 0, j = 0;
    
    scanf("%s", str);
    
    while (str[i]) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            result[j++] = str[i];
        }
        i++;
    }
    
    result[j] = '\0';
    printf("%s\n", result);
    
    return 0;
}
