#include <stdio.h>
#include <string.h>

void compressString(char* str, char* result) {
    int len = strlen(str);
    int writePos = 0;
    int i = 0;
    
    while (i < len) {
        char currentChar = str[i];
        int count = 1;
        
        while (i + 1 < len && str[i + 1] == currentChar) {
            count++;
            i++;
        }
        
        result[writePos] = currentChar;
        writePos++;
        result[writePos] = count + '0';
        writePos++;
        
        i++;
    }
    
    result[writePos] = '\0';
}

int main() {
    char input[100];
    char compressed[200];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    compressString(input, compressed);
    
    if (strlen(compressed) < strlen(input)) {
        printf("%s\n", compressed);
    } else {
        printf("%s\n", input);
    }
    
    return 0;
}