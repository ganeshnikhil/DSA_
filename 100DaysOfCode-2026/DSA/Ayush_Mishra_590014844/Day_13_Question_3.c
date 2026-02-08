#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char *words[100], *token;
    int count = 0;

    token = strtok(str, " ");
    while (token) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[] = "  Java Python C++  ";
    reverseWords(str);
    return 0;
}
