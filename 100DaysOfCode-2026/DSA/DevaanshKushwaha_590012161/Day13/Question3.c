#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char *words[500];  // Array to store pointers to words
    int count = 0;

    // Tokenize the string manually while handling multiple spaces
    char *ptr = str;
    while (*ptr) {
        // Skip leading spaces
        while (*ptr && isspace(*ptr)) ptr++;

        if (*ptr) {
            words[count++] = ptr;  // Start of word

            // Move to end of word
            while (*ptr && !isspace(*ptr)) ptr++;

            if (*ptr) {
                *ptr = '\0';  // Null-terminate the word
                ptr++;
            }
        }
    }

    // Print words in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    char input[1000];
    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    reverseWords(input);

    return 0;
}
