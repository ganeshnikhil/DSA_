#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

int isPalindrome(char str[]) {
    char remove[MAX];
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            remove[j++] = tolower(str[i]);
        }
    }
    remove[j] = '\0';

    int start = 0;
    int end = j - 1;

    while (start < end) {
        if (remove[start] != remove[end])
            return 0;  
        start++;
        end--;
    }

    return 1;  
}

int main() {
    char input[MAX];

    printf("Enter a string to check if it's a palindrome:\n");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

