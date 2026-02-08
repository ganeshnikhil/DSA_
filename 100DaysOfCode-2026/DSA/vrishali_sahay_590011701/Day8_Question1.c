#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[201];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    // Uppercase and lowercase versions
    char upper[201], lower[201];
    strcpy(upper, str);
    strcpy(lower, str);
    for (int i = 0; upper[i]; i++) upper[i] = toupper(upper[i]);
    for (int i = 0; lower[i]; i++) lower[i] = tolower(lower[i]);

    printf("Length: %zu, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n", len, str, upper, lower);
    return 0;
}
