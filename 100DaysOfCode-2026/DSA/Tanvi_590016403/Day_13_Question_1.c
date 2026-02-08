#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

// Function 1: Count words and find the longest word
void wordCountAndLongest(char str[]) {
    int wordCount = 0, maxLen = 0;
    char longest[MAX] = "";
    char temp[MAX];
    int i = 0, j = 0;

    while (str[i]) {
        // Skip leading spaces
        while (str[i] && isspace(str[i])) i++;

        j = 0;
        while (str[i] && !isspace(str[i])) {
            temp[j++] = str[i++];
        }

        if (j > 0) {
            temp[j] = '\0';
            wordCount++;
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, temp);
            }
        }
    }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: \"%s\"\n", longest);
}

// Function 2: Check if a permutation of the string can form a palindrome
int canFormPalindrome(char str[]) {
    int freq[256] = {0}, i, oddCount = 0;

    for (i = 0; str[i]; i++) {
        if (!isspace(str[i]))
            freq[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] % 2 != 0)
            oddCount++;
    }

    return oddCount <= 1;
}

// Function 3: Reverse the order of words in the string
void reverseWords(char str[]) {
    char *words[MAX];
    int count = 0;
    char *token = strtok(str, " ");
    
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    printf("Reversed: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i != 0)
            printf(" ");
    }
    printf("\n");
}

// Main function
int main() {
    char input1[MAX] = " Java Python C++ ";
    char input2[MAX] = "aabbcc";
    char input3[MAX] = "Hello World Programming";

    printf("=== Task 1: Word Count and Longest Word ===\n");
    wordCountAndLongest(input1);

    printf("\n=== Task 2: Palindrome Permutation Check ===\n");
    printf("Can \"%s\" be rearranged to form a palindrome? %s\n", input2, canFormPalindrome(input2) ? "true" : "false");

    printf("\n=== Task 3: Reverse Words in String ===\n");
    reverseWords(input3);

    return 0;
}
