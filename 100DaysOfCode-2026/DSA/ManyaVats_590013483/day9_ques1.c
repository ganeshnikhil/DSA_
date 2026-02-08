#include <stdio.h>
#include <ctype.h>  

int isPalindrome(char str[]) {
    int left = 0;
    int right;
  
    for (right = 0; str[right] != '\0'; right++);

    right--;

    while (left < right) {
       if (tolower(str[left]) != tolower(str[right])) {
            return 0; 
        }
        left++;
        right--;
    }

    return 1;  
}

int main() {
    char str[] = "Madam";

    if (isPalindrome(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
