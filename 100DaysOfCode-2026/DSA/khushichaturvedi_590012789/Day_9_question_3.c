#include <stdio.h>
#include <string.h>
#define ASCII_SIZE 256  // Total possible ASCII characters
int main() {
    char str[1000];
    int freq[ASCII_SIZE] = {0};  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    char result = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
    }
    if (result != -1)
        printf("First non-repeating character: %c\n", result);
    else
        printf("-1 (No non-repeating character found)\n");
    return 0;
}
