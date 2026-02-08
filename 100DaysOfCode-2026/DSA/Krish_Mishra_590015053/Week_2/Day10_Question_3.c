#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanString(char *str, char *cleaned) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            cleaned[j++] = tolower(str[i]);
    }
    cleaned[j] = '\0';
}
int areAnagrams(char *str1, char *str2) {
    int count1[26] = {0}, count2[26] = {0};
    int i;
    for (i = 0; str1[i] != '\0'; i++)
        count1[str1[i] - 'a']++;
    for (i = 0; str2[i] != '\0'; i++)
        count2[str2[i] - 'a']++;
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char input1[100], input2[100];
    char clean1[100], clean2[100];

    printf("Enter String 1: ");
    fgets(input1, sizeof(input1), stdin);
    printf("Enter String 2: ");
    fgets(input2, sizeof(input2), stdin);

    if (input1[strlen(input1) - 1] == '\n')
        input1[strlen(input1) - 1] = '\0';
    if (input2[strlen(input2) - 1] == '\n')
        input2[strlen(input2) - 1] = '\0';

    cleanString(input1, clean1);
    cleanString(input2, clean2);

    if (areAnagrams(clean1, clean2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
