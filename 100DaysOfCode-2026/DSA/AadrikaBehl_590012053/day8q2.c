#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i]; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Output:\n%d\n", count);
    return 0;
}
