#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1000

int isPalindrome(const char *str) {
    char filtered[MAX_LEN];
    int i, j = 0;

    for (i = 0; str[i] != '\0' && j < MAX_LEN - 1; i++) {
        if (isalnum((unsigned char)str[i])) {
            filtered[j++] = tolower((unsigned char)str[i]);
        }
    }
    filtered[j] = '\0';

    
    int left = 0;
    int right = j - 1;

    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return 0; 
        }
        left++;
        right--;
    }

    return 1; 
}

int main() {
    char input[MAX_LEN];

    printf("Enter a string: ");
    fgets(input, MAX_LEN, stdin);

    if (isPalindrome(input)) {
        printf("The input is a palindrome.\n");
    } else {
        printf("The input is not a palindrome.\n");
    }

    return 0;
}
