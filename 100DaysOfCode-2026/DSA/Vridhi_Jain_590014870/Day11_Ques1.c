#include <stdio.h>

int main() {
    char str[1000];
    char clean[1000];
    int i, j = 0, left, right;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            clean[j++] = str[i];
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            clean[j++] = str[i] + 32;
        }
    }
    
    left = 0;
    right = j - 1;
    
    while (left < right) {
        if (clean[left] != clean[right]) {
            printf("Not a palindrome\n");
            return 0;
        }
        left++;
        right--;
    }
    
    printf("Palindrome\n");
    return 0;
}