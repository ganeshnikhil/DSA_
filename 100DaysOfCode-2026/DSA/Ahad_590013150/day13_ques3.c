#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char words[100][100]; // Up to 100 words, each max 100 chars
    int wordCount = 0, i = 0;

    while (str[i] != '\0') {
        while (isspace(str[i])) i++; // skip spaces

        int j = 0;
        if (str[i] != '\0') {
            while (str[i] != '\0' && !isspace(str[i])) {
                words[wordCount][j++] = str[i++];
            }
            words[wordCount][j] = '\0';
            wordCount++;
        }
    }

    // Print in reverse order
    for (int k = wordCount - 1; k >= 0; k--) {
        printf("%s", words[k]);
        if (k != 0) printf(" ");
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
