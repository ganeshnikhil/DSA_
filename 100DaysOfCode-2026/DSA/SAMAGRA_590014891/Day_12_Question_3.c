#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    char result[1000] = "";
    int count = 1;

    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            char temp[20];
            sprintf(temp, "%c%d", str[i], count);
            strcat(result, temp);
            count = 1;
        }
    }

    if (strlen(result) < len) {
        printf("Output: %s\n", result);
    } else {
        printf("Output: %s\n", str);
    }
}

int main() {
    char str[1000];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    compressString(str);

    return 0;
}
