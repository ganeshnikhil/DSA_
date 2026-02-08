#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int length = 0;

    printf("Enter a string: ");
    gets(str); 
  
    printf("Original: \"%s\"\n", str);
    printf("Uppercase: \"");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));
        length++;
    }
    printf("\"\n");

    printf("Lowercase: \"");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));
    }
    printf("\"\n");

    printf("Length: %d\n", length);

    return 0;
}
