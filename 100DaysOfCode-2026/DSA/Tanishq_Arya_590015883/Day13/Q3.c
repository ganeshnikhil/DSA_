#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000
#define MAX_WORDS 200

int main() {
    char str[MAX_LEN];
    char *words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter a string:\n");
    fgets(str, MAX_LEN, stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    char *token = strtok(str, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}
