#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    char upper[100], lower[100];
    for (int i = 0; str[i]; i++) {
        upper[i] = toupper(str[i]);
        lower[i] = tolower(str[i]);
    }
    upper[length] = '\0';
    lower[length] = '\0';

    printf("Length: %d, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n",
           length, str, upper, lower);

    return 0;
}