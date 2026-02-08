#include <stdio.h>

int main() {
    char str[1000];
    int i, j, k, count = 0, len = 0, isPalindrome;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    while (str[len] != '\0') {
        len++;
    }
    
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            isPalindrome = 1;
            for (k = 0; k <= (j - i) / 2; k++) {
                if (str[i + k] != str[j - k]) {
                    isPalindrome = 0;
                    break;
                }
            }
            if (isPalindrome) {
                count++;
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}