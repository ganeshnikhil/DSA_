#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world programming";
    int count = 0, maxLen = 0;
    char longest[100] = "";
    char *token = strtok(str, " ");
    while (token) {
        if (strlen(token) > 0) {
            count++;
            if ((int)strlen(token) > maxLen) {
                maxLen = strlen(token);
                strcpy(longest, token);
            }
        }
        token = strtok(NULL, " ");
    }
    printf("Word count: %d\nLongest word: %s\n", count, longest);
    return 0;
}
