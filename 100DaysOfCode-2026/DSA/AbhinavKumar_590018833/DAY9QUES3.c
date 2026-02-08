#include <stdio.h>
#include <string.h>

#define SIZE 256 

char firstNonRepeatingChar(char str[]) {
    int freq[SIZE] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return -1; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char result = firstNonRepeatingChar(str);

    if (result == -1) {
        printf("-1\n");
    } else {
        printf("First non-repeating character: '%c'\n", result);
    }
    return 0;
}
