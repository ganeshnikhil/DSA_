#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        
        while (left < right && !isalpha(str[left])) left++;
        // Move right index to previous alphabetic character
        while (left < right && !isalpha(str[right])) right--;

       
        if (tolower(str[left]) != tolower(str[right]))
            return 0;

        left++;
        right--;
    }
    return 1;
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
   
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
