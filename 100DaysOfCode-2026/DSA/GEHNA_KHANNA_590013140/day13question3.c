#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], words[100][100];
    int i = 0, j = 0, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            words[k][j++] = str[i];
        } else if (j > 0) {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }

    if (j > 0) {
        words[k][j] = '\0';
        k++;
    }

    for (i = k - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }

    printf("\n");
    return 0;
}
