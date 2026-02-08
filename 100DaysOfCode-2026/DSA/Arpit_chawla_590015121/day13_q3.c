#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], words[500][100];
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0, k = 0, wordCount = 0;

    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            words[wordCount][j++] = str[i];
        } else if (j > 0) {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        i++;
    }

    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }

    for (i = wordCount - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
