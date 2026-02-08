#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i]; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d\n", count);
    return 0;
}