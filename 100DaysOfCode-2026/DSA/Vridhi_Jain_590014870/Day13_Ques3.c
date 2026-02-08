#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], words[100][100];
    int i = 0, j = 0, k = 0;

    printf("Enter the string: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[k][j++] = str[i];
        } else if (j != 0) {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }

    if (j != 0) {
        words[k][j] = '\0';
        k++;
    }

    for (int x = k - 1; x >= 0; x--) {
        printf("%s", words[x]);
        if (x != 0) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
