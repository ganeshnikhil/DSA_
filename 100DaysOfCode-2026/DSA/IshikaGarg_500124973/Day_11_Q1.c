#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s) {
    int len = strlen(s);
    char filtered[len + 1]; 
    int index = 0;
    // Filter only alphanumeric and lowercase
    for (int i = 0; i < len; i++) {
        if (isalnum(s[i])) {
            filtered[index++] = tolower(s[i]);
        }
    }
    filtered[index] = '\0';

    // Check palindrome
    int left = 0, right = index - 1;
    while (left < right) {
        if (filtered[left++] != filtered[right--]) return false;
    }
    return true;
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    printf("%s\n", isPalindrome(input) ? "true" : "false");
    return 0;
}
