#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char noSpaces[200], trimmed[200], singleSpace[200];
    int i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            noSpaces[j++] = str[i];
        }
    }
    noSpaces[j] = '\0';
    i = 0;
    while (str[i] == ' ') i++; 
    j = strlen(str) - 1;
    while (str[j] == ' ') j--; 

    int k = 0;
    for (int x = i; x <= j; x++) {
        trimmed[k++] = str[x];
    }
    trimmed[k] = '\0';
    i = 0;
    while (str[i] == ' ') i++; 
    j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            singleSpace[j++] = str[i];
        } else {
            singleSpace[j++] = ' ';
            while (str[i] == ' ') i++; 
            i--;
        }
        i++;
    }
    singleSpace[j] = '\0';
    if (j > 0 && singleSpace[j - 1] == ' ') {
        singleSpace[j - 1] = '\0';
    }
    printf("Remove all spaces: \"%s\"\n", noSpaces);
    printf("Trimmed: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", singleSpace);
    return 0;
}
