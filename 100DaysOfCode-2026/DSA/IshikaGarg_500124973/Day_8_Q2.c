#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';  

    printf("Enter the character to search: ");
    scanf(" %c", &ch);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("'%c' appears %d time(s).\n", ch, count);
    return 0;
}
