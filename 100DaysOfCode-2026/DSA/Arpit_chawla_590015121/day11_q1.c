#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

int is_alphanumeric(char ch) {
    return (isalpha(ch) || isdigit(ch));
}

int is_palindrome(char str[]) {
    char cleaned[MAX];
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (is_alphanumeric(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    int start = 0;
    int end = j - 1;
    while (start < end) {
        if (cleaned[start] != cleaned[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main() {
    char input[MAX];

    printf("Enter a string: ");
    fgets(input, MAX, stdin);

    size_t len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    if (is_palindrome(input)) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
