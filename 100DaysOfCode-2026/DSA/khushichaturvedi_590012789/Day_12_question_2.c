#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int seen[256] = {0};
    int i = 0, j = 0;

    while (str[i]) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            seen[ch] = 1;
            str[j++] = ch;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
