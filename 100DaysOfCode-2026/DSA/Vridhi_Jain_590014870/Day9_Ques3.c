#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int len;
    int found = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    len = strlen(str);
    
    for(i = 0; i < len; i++) {
        int count = 0;
        
        for(j = 0; j < len; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }
        
        if(count == 1) {
            printf("'%c'\n", str[i]);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("-1\n");
    }
    
    return 0;
}