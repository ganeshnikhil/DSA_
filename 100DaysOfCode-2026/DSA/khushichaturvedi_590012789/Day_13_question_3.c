#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char *words[100];
    int count = 0;
    char *token = strtok(str, " \t\n");

    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \t\n");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseWords(str);
    return 0;
}
