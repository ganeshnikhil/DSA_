#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char upper[100], lower[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    strcpy(upper, str);
    strcpy(lower, str);

    for (i = 0; upper[i]; i++) {
        upper[i] = toupper(upper[i]);
    }

    for (i = 0; lower[i]; i++) {
        lower[i] = tolower(lower[i]);
    }

    printf("Original String: %s\n", str);
    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);
    printf("Length: %lu\n", strlen(str));

    return 0;
}
