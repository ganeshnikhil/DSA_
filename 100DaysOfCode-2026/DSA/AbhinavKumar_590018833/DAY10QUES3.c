#include <stdio.h>
#include <string.h>

char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + 32;
    return ch;
}

void cleanAndCount(char str[], int freq[26]) {
    for (int i = 0; str[i]; i++) {
        char ch = toLowerChar(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }
}

int isAnagram(char a[], char b[]) {
    int freq1[26] = {0}, freq2[26] = {0};
    cleanAndCount(a, freq1);
    cleanAndCount(b, freq2);

    for (int i = 0; i < 26; i++)
        if (freq1[i] != freq2[i]) return 0;

    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (isAnagram(str1, str2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
