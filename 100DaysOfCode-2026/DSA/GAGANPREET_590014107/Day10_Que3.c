#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 256 

void buildFrequencyTable(const char *str, int freq[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            freq[tolower(str[i])]++;
        }
    }
}

int areAnagrams(const char *str1, const char *str2) {
    int freq1[SIZE] = {0};
    int freq2[SIZE] = {0};

    buildFrequencyTable(str1, freq1);
    buildFrequencyTable(str2, freq2);

    for (int i = 0; i < SIZE; i++) {
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

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
