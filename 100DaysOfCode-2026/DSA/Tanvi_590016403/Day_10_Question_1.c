#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function to compare strings
void compareStrings(char str1[], char str2[]) {
    // Exact comparison
    if (strcmp(str1, str2) == 0)
        printf("Equal, ");
    else
        printf("Not equal, ");

    // Case-insensitive comparison
    char lower1[100], lower2[100];
    for (int i = 0; str1[i]; i++) lower1[i] = tolower(str1[i]); lower1[strlen(str1)] = '\0';
    for (int i = 0; str2[i]; i++) lower2[i] = tolower(str2[i]); lower2[strlen(str2)] = '\0';

    if (strcmp(lower1, lower2) == 0)
        printf("Equal ignoring case, ");
    else
        printf("Not equal ignoring case, ");

    // Lexicographical comparison
    if (strcmp(str1, str2) == 0)
        printf("Strings are identical\n");
    else if (strcmp(str1, str2) < 0)
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    else
        printf("\"%s\" comes before \"%s\"\n", str2, str1);
}

// Function to remove all spaces
void removeAllSpaces(char* str, char* result) {
    int j = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            result[j++] = str[i];
    result[j] = '\0';
}

// Function to trim leading and trailing spaces
void trimSpaces(char* str, char* result) {
    int start = 0, end = strlen(str) - 1;
    while (isspace(str[start])) start++;
    while (isspace(str[end])) end--;
    int j = 0;
    for (int i = start; i <= end; i++)
        result[j++] = str[i];
    result[j] = '\0';
}

// Function to remove extra spaces between words (single spaces)
void singleSpaces(char* str, char* result) {
    int i = 0, j = 0;
    bool inSpace = false;
    while (str[i]) {
        if (isspace(str[i])) {
            if (!inSpace) {
                result[j++] = ' ';
                inSpace = true;
            }
        } else {
            result[j++] = str[i];
            inSpace = false;
        }
        i++;
    }
    result[j] = '\0';

    // Remove leading and trailing spaces
    trimSpaces(result, result);
}

// Function to check if two strings are anagrams
bool checkAnagram(char* str1, char* str2) {
    int count1[256] = {0}, count2[256] = {0};

    // Normalize and count characters
    for (int i = 0; str1[i]; i++) {
        if (!isspace(str1[i]))
            count1[tolower(str1[i])]++;
    }
    for (int i = 0; str2[i]; i++) {
        if (!isspace(str2[i]))
            count2[tolower(str2[i])]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return false;
    }
    return true;
}

int main() {
    // -------- String Comparison --------
    char s1[] = "Hello", s2[] = "hello";
    printf("Comparing \"%s\" and \"%s\":\n", s1, s2);
    compareStrings(s1, s2);

    // -------- Remove Spaces --------
    char input[] = "  a  
