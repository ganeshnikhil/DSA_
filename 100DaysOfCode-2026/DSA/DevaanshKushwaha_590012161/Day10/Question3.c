#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to clean input: remove spaces and convert to lowercase
void cleanString(const char *input, char *output) {
    while (*input) {
        if (!isspace(*input)) {
            *output = tolower(*input);
            output++;
        }
        input++;
    }
    *output = '\0';
}

// Function to count character frequencies
void countFrequency(const char *str, int freq[26]) {
    while (*str) {
        freq[*str - 'a']++;
        str++;
    }
}

// Check if two frequency arrays are equal
int isAnagram(const char *str1, const char *str2) {
    char clean1[200], clean2[200];
    int freq1[26] = {0}, freq2[26] = {0};

    cleanString(str1, clean1);
    cleanString(str2, clean2);

    if (strlen(clean1) != strlen(clean2))
        return 0;

    countFrequency(clean1, freq1);
    countFrequency(clean2, freq2);

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i])
            return 0;
    }
    return 1;
}

int main() {
    char str1[200], str2[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (isAnagram(str1, str2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
