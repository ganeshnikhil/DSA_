#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanString(char *src, char *dest) {
    int j = 0;
    for (int i = 0; src[i]; i++) {
        if (isalpha(src[i])) {
            dest[j++] = tolower(src[i]);
        }
    }
    dest[j] = '\0';
}

int areAnagrams(char *str1, char *str2) {
    int count[26] = {0};

    for (int i = 0; str1[i]; i++) {
        count[str1[i] - 'a']++;
    }

    for (int i = 0; str2[i]; i++) {
        count[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s1[100], s2[100];
    char clean1[100], clean2[100];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    cleanString(s1, clean1);
    cleanString(s2, clean2);

    if (strlen(clean1) != strlen(clean2)) {
        printf("false\n");
    } else if (areAnagrams(clean1, clean2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
