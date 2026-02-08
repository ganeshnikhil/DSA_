#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CHAR_COUNT 256
void buildFrequencyArray(const char *str, int freq[]) {
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            freq[(unsigned char)ch]++;
        }
    }
}
int areAnagrams(const char *str1, const char *str2) {
    int freq1[CHAR_COUNT] = {0};
    int freq2[CHAR_COUNT] = {0};
    buildFrequencyArray(str1, freq1);
    buildFrequencyArray(str2, freq2);
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (freq1[i] != freq2[i]) {
            return 0;  
        }
    }
    return 1;  
}
int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
