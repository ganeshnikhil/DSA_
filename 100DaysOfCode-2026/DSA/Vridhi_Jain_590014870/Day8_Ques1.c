#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char upper[100], lower[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(upper, str);
    strcpy(lower, str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            upper[i] = str[i] - 32;
        } else {
            upper[i] = str[i];
        }

        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower[i] = str[i] + 32;
        } else {
            lower[i] = str[i];
        }
    }

    upper[i] = '\0';
    lower[i] = '\0';

    printf("Length: %lu, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n",
           strlen(str), str, upper, lower);

    return 0;
}
