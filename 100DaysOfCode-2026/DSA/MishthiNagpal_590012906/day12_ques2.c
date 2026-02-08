#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1000

void removeDuplicates(char str[]) {
    bool string[256] = { false };  
    char result[MAX];
    int resIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!string[(unsigned char)ch]) {
            string[(unsigned char)ch] = true;
            result[resIndex++] = ch;
        }
    }

    result[resIndex] = '\0';  

    printf("String after removing duplicates: %s\n", result);
}

int main() {
    char input[MAX];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    removeDuplicates(input);

    return 0;
}
