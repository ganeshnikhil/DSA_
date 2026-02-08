#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH];
    char upperCase[MAX_LENGTH];
    char lowerCase[MAX_LENGTH];
    int length;
    printf("Enter the string (less than 100 characters): ");
    fgets(input, MAX_LENGTH, stdin);

    size_t inputLength = strlen(input);
    if (input[inputLength - 1] == '\n') {
        input[inputLength - 1] = '\0';
        inputLength--;
    }

    length = inputLength;

    printf("Length: %d\n", length);
    printf("Original string: %s\n", input);
    for (int i = 0; i < length; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            upperCase[i] = input[i] - 32;
        } else {
            upperCase[i] = input[i];
        }
    }
    upperCase[length] = '\0';
    printf("Uppercase: %s\n", upperCase);

    for (int i = 0; i < length; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            lowerCase[i] = input[i] + 32;
        } else {
            lowerCase[i] = input[i];
        }
    }
    lowerCase[length] = '\0';
    printf("Lowercase: %s\n", lowerCase);

    return 0;
}
