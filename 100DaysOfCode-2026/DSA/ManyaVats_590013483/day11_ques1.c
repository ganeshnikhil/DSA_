#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    char cleanStr[1000];  
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';  
    int start = 0;
    int end = j - 1;
    while (start < end) {
        if (cleanStr[start] != cleanStr[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char input[] = "No 'x' in Nixon";

    if (isPalindrome(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
