#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char words[50][50]; 
    int wordCount = 0, i = 0, j = 0, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
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
        if (i != 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
