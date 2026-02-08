#include <stdio.h>
#include <string.h>

int main() {
    char str[100], compressed[200];
    int i = 0, j = 0, count;

    printf("Enter a string: ");
    scanf("%s", str);  

    int len = strlen(str);

    while (i < len) {
        count = 1;
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        compressed[j++] = str[i]; 
        j += sprintf(&compressed[j], "%d", count);  
        i++;
    }

    compressed[j] = '\0'; 


    if (strlen(compressed) < len) {
        printf("Output: %s\n", compressed);
    } else {
        printf("Output: %s\n", str);
    }

    return 0;
}
