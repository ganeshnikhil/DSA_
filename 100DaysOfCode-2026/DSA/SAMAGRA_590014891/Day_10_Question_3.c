#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanString(char *str, char *cleaned) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ')
            cleaned[j++] = tolower(str[i]);
    }
    cleaned[j] = '\0';
}

int isAnagram(char *str1, char *str2) {
    int freq1[26] = {0}, freq2[26] = {0};
    char cleaned1[200], cleaned2[200];

    cleanString(str1, cleaned1);
    cleanString(str2, cleaned2);

    if (strlen(cleaned1) != strlen(cleaned2))
        return 0;

    for (int i = 0; cleaned1[i]; i++)
        freq1[cleaned1[i] - 'a']++;

    for (int i = 0; cleaned2[i]; i++)
        freq2[cleaned2[i] - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[200], str2[200];

    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isAnagram(str1, str2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
