#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ') {
            count1[tolower(str1[i]) - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ') {
            count2[tolower(str2[i]) - 'a']++;
        }
    }

    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
