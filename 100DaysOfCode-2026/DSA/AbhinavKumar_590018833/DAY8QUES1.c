#include <stdio.h>
#include <string.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[100];
    char upperStr[100], lowerStr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(upperStr, str);
    strcpy(lowerStr, str);
    toUpperCase(upperStr);
    toLowerCase(lowerStr);
    printf("Length: %lu\n", strlen(str));
    printf("Original: \"%s\"\n", str);
    printf("Uppercase: \"%s\"\n", upperStr);
    printf("Lowercase: \"%s\"\n", lowerStr);

    return 0;
}
