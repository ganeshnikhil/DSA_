#include <stdio.h>
#include <string.h>

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

int areAnagrams(const char *str1, const char *str2) {
    int freq1[26] = {0}, freq2[26] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if (ch != ' ') {
            ch = toLower(ch);
            if (ch >= 'a' && ch <= 'z') {
                freq1[ch - 'a']++;
            }
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if (ch != ' ') {
            ch = toLower(ch);
            if (ch >= 'a' && ch <= 'z') {
                freq2[ch - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str1[200], str2[200];

    printf("String1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("String2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    if (areAnagrams(str1, str2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
