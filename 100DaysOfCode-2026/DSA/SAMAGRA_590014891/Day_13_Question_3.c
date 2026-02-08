#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char words[100][100]; 
    int wordCount = 0;

    int i = 0;
    while (str[i] != '\0') {
        while (isspace(str[i])) {
            i++;  
        }
        if (str[i] == '\0') break;

        int j = 0;
        while (str[i] != '\0' && !isspace(str[i])) {
            words[wordCount][j++] = str[i++];
        }
        words[wordCount][j] = '\0';
        wordCount++;
    }

    for (int k = wordCount - 1; k >= 0; k--) {
        printf("%s", words[k]);
        if (k > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
