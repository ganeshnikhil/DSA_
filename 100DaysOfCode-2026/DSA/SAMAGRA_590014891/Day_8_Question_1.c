#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char upper[100], lower[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    for (i = 0; str[i] != '\0'; i++) {
        upper[i] = toupper(str[i]);
        lower[i] = tolower(str[i]);
    }
    upper[i] = '\0';
    lower[i] = '\0';

    printf("Length: %d, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n", length, str, upper, lower);

    return 0;
}
