#include <stdio.h>
#include <string.h>

void removeDuplicates(char* str) {
    int len = strlen(str);
    int writePos = 0;
    int i, j;
    
    for (i = 0; i < len; i++) {
        int found = 0;
        for (j = 0; j < i; j++) {
            if (str[j] == str[i]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            str[writePos] = str[i];
            writePos++;
        }
    }
    
    str[writePos] = '\0';
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    removeDuplicates(input);
    
    printf("%s\n", input);
    
    return 0;
}