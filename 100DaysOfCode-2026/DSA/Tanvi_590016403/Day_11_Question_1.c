#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Helper function to convert string to lowercase
void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

// 1. String Comparison
void compareStrings(char* str1, char* str2) {
    printf("== String Comparison ==\n");

    if (strcmp(str1, str2) == 0)
        printf("Equal, Equal ignoring case, Strings are identical\n");
    else {
        char temp1[100], temp2[100];
        strcpy(temp1, str1);
        strcpy(temp2, str2);
        toLowerCase(temp1);
        toLowerCase(temp2);

        if (strcmp(temp1, temp2) == 0)
            printf("Not equal, Equal ignoring case, ");
        else
            printf("Not equal, Not equal ignoring case, ");

        int cmp = strcmp(str1, str2);
        if (cmp < 0)
            printf("\"%s\" comes before \"%s\"\n", str1, str2);
        else if (cmp > 0)
            printf("\"%s\" comes before \"%s\"\n", str2, str1);
    }
}

// 2. Space Removal Operations
void removeSpaces(char* str) {
    printf("\n== Space Removal ==\n");

    // Remove all spaces
    char all[100] = "";
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ')
            strncat(all, &str[i], 1);
    }

    // Trim (leading & trailing)
    char trim[100];
    int start = 0, end = strlen(str) - 1;
    while (str[start] == ' ') start++;
    while (str[end] == ' ') end--;
    strncpy(trim, &str[start], end - start + 1);
    trim[end - start + 1] = '\0';

    // Single space version
    char single[100] = "";
    int i = 0;
    while (str[i]) {
        while (str[i] == ' ' && str[i + 1] == ' ')
            i++;
        strncat(single, &str[i], 1);
        i++;
    }

    printf("Remove all: \"%s\"\n", all);
    printf("Trim: \"%s\"\n", trim);
    printf("Single spaces: \"%s\"\n", single);
}

// 3. Check Anagram
int compareCharFreqs(int* a, int* b) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int isAnagram(char* str1, char* str2) {
    int freq1[26] = {0}, freq2[26] = {0};

    for (int i = 0; str1[i]; i++) {
        if (isalpha(str1[i]))
            freq1[tolower(str1[i]) - 'a']++;
    }
    for (int i = 0; str2[i]; i++) {
        if (isalpha(str2[i]))
            freq2[tolower(str2[i]) - 'a']++;
    }
    return compareCharFreqs(freq1, freq2);
}

void checkAnagram(char* str1, char* str2) {
    printf("\n== Anagram Check ==\n");
    if (isAnagram(str1, str2))
        printf("true\n");
    else
        printf("false\n");
}

// Main driver
int main() {
    char str1[100], str2[100];

    printf("Enter String1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove newline

    printf("Enter String2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline

    compareStrings(str1, str2);
    removeSpaces(str1);
    checkAnagram(str1, str2);

    return 0;
}
