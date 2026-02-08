#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toLowerAndStrip(char *src, char *dst) {
    int j = 0;
    for (int i = 0; src[i]; i++) {
        if (!isspace(src[i]))
            dst[j++] = tolower(src[i]);
    }
    dst[j] = '\0';
}

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (str[i] > str[j]) {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
}

int isAnagram(char *s1, char *s2) {
    char clean1[100], clean2[100];
    toLowerAndStrip(s1, clean1);
    toLowerAndStrip(s2, clean2);
    sortString(clean1);
    sortString(clean2);
    return strcmp(clean1, clean2) == 0;
}
