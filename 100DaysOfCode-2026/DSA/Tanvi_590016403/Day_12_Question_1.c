#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 1. String Rotation Check
bool isRotation(const char *s1, const char *s2) {
    if (strlen(s1) != strlen(s2)) return false;
    char *concat = malloc(strlen(s1) * 2 + 1);
    strcpy(concat, s1);
    strcat(concat, s1);
    bool result = strstr(concat, s2) != NULL;
    free(concat);
    return result;
}

// 2. Remove Duplicate Characters
void removeDuplicates(const char *input, char *output) {
    int seen[256] = {0};
    int j = 0;
    for (int i = 0; input[i]; i++) {
        if (!seen[(unsigned char)input[i]]) {
            seen[(unsigned char)input[i]] = 1;
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
}

// 3. Compress String
void compressString(const char *input, char *output) {
    int len = strlen(input), j = 0;
    for (int i = 0; i < len;) {
        char current = input[i];
        int count = 0;
        while (i < len && input[i] == current) {
            count++;
            i++;
        }
        output[j++] = current;
        j += sprintf(&output[j], "%d", count);
    }
    output[j] = '\0';

    if (strlen(output) >= len)
        strcpy(output, input); // Return original if compressed is not shorter
}

// Main function with sample test cases
int main() {
    // 1. String Rotation
    printf("1. String Rotation Check:\n");
    printf("Input: \"abcde\", \"cdeab\" -> Output: %s\n", isRotation("abcde", "cdeab") ? "true" : "false");
    printf("Input: \"hello\", \"world\" -> Output: %s\n", isRotation("hello", "world") ? "true" : "false");
    printf("Input: \"waterbottle\", \"erbottlewat\" -> Output: %s\n\n", isRotation("waterbottle", "erbottlewat") ? "true" : "false");

    // 2. Remove Duplicate Characters
    printf("2. Remove Duplicate Characters:\n");
    char output1[100];
    removeDuplicates("programming", output1);
    printf("Input: \"programming\" -> Output: %s\n", output1);
    removeDuplicates("hello", output1);
    printf("Input: \"hello\" -> Output: %s\n", output1);
    removeDuplicates("aabbcc", output1);
    printf("Input: \"aabbcc\" -> Output: %s\n\n", output1);

    // 3. Compress String
    printf("3. Compress String:\n");
    char output2[100];
    compressString("aabcccccaaa", output2);
    printf("Input: \"aabcccccaaa\" -> Output: %s\n", output2);
    compressString("abc", output2);
    printf("Input: \"abc\" -> Output: %s\n", output2);
    compressString("aabbcc", output2);
    printf("Input: \"aabbcc\" -> Output: %s\n", output2);

    return 0;
}
