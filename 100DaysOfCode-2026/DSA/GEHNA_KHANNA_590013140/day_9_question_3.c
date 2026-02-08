#include <stdio.h>

int main() {
    char str[100];
    int i, j, isUnique;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        isUnique = 1;

        for (j = 0; str[j] != '\0'; j++) {
            if (i != j && str[i] == str[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("First non-repeating character: '%c'\n", str[i]);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
