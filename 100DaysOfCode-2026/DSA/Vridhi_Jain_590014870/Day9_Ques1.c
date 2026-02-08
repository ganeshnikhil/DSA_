#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int len;
    int isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    len = strlen(str);
    
    for(i = 0, j = len-1; i < j; i++, j--) {
        char left = str[i];
        char right = str[j];
        
        if(left >= 'A' && left <= 'Z') {
            left = left + 32;
        }
        if(right >= 'A' && right <= 'Z') {
            right = right + 32;
        }
        
        if((left < 'a' || left > 'z')) {
            i--;
            continue;
        }
        if((right < 'a' || right > 'z')) {
            j++;
            continue;
        }
        
        if(left != right) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}