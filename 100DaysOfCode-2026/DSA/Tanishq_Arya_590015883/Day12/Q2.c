#include <stdio.h>
#include <string.h>

void removeDuplicatesNaive(char* str) {
    int i, j, k = 0;
    char result[100];  

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;  
            }
        }
        if (j == i) {
            result[k++] = str[i];  
        }
    }

    result[k] = '\0';  

    
    strcpy(str, result);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    removeDuplicatesNaive(str);

    printf("Output:\n%s\n", str);

    return 0;
}
