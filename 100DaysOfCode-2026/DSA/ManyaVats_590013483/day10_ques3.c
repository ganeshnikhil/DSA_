#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanString(char *src, char *cleaned) {
    int i = 0, j = 0;
    while (src[i]) {
        if (!isspace(src[i])) {
            cleaned[j++] = tolower(src[i]);
        }
        i++;
    }
    cleaned[j] = '\0';
}

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char *str1, char *str2) {
    char cleaned1[100], cleaned2[100];

    cleanString(str1, cleaned1);
    cleanString(str2, cleaned2);

    if (strlen(cleaned1) != strlen(cleaned2))
        return 0;

    sortString(cleaned1);
    sortString(cleaned2);

    return strcmp(cleaned1, cleaned2) == 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2))
        printf("true (The strings are anagrams)\n");
    else
        printf("false (The strings are NOT anagrams)\n");

    return 0;
}
