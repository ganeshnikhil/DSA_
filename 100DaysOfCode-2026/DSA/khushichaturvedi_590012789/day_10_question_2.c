#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removeAllSpaces(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
}
void trimSpaces(char *str) {
    int start = 0, end = strlen(str) - 1;
    while (isspace(str[start])) start++;
    while (end >= start && isspace(str[end])) end--;
    int j = 0;
    for (int i = start; i <= end; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';
}
void removeExtraSpaces(char *str) {
    int i = 0, j = 0;
    int spaceFound = 0;
    trimSpaces(str); 
    while (str[i]) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
            spaceFound = 0;
        } else if (!spaceFound) {
            str[j++] = ' ';
            spaceFound = 1;
        }
        i++;
    }
    str[j] = '\0';
}
int main() {
    char original[1000], str1[1000], str2[1000], str3[1000];
    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);
    size_t len = strlen(original);
    if (original[len - 1] == '\n') original[len - 1] = '\0';
    strcpy(str1, original);
    strcpy(str2, original);
    strcpy(str3, original);
    removeAllSpaces(str1);
    trimSpaces(str2);
    removeExtraSpaces(str3);
    printf("\nOriginal: \"%s\"\n", original);
    printf("All spaces removed: \"%s\"\n", str1);
    printf("Trimmed (leading & trailing): \"%s\"\n", str2);
    printf("Extra spaces removed (one space between words): \"%s\"\n", str3);
    return 0;
}
