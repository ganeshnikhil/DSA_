#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char temp[20];
    
    printf("Enter number of words: ");
    scanf("%d", &n);
    
    char words[n][20];
    
    printf("Enter %d words: ", n);
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(strlen(words[j]) > strlen(words[j+1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }
    
    for(i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}