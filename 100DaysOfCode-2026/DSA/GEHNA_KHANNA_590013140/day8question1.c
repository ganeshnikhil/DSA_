#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length: %d\n", length-1);
    printf("Original: %s\n", str);
    printf("Uppercase: ");
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            printf("%c", str[i] - 32);
        } else 
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    printf("Lowercase: ");
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            printf("%c", str[i] + 32);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
