#include <stdio.h>
#include <string.h>
#include <ctype.h>

void buildCharCount(const char *str, int count[26]) {
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            count[tolower(str[i]) - 'a']++;
        }
    }
}

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    buildCharCount(str1, count1);
    buildCharCount(str2, count2);

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
