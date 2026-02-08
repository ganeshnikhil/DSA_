#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int i, j, k;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }
        if (j != i) {
            for (k = i; k < len; k++) {
                str[k] = str[k + 1];
            }
            len--;
            i--;
        }
    }
}

int main() {
    char str[1000];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeDuplicates(str);

    printf("Output: %s\n", str);

    return 0;
}
