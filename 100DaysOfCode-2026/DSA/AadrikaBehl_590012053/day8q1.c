#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Length: %lu\n", strlen(str));
    printf("Original: \"%s\"\n", str);

    
    char upper[1000], lower[1000];
    strcpy(upper, str);
    strcpy(lower, str);

    for (int i = 0; upper[i]; i++) {
        upper[i] = toupper(upper[i]);
    }

    for (int i = 0; lower[i]; i++) {
        lower[i] = tolower(lower[i]);
    }

    printf("Uppercase: \"%s\"\n", upper);
    printf("Lowercase: \"%s\"\n", lower);

    return 0;
}
