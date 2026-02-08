#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define CHAR_RANGE 256 // Assuming ASCII characters

// Function prototype for prepare_string
void prepare_string(char *str);

// Function to clean and prepare the string (remove spaces and convert to lowercase)
void prepare_string(char *str) 
{
    int count = 0;
    for (int i = 0; str[i]; i++) 
    {
        if (!isspace(str[i])) 
        {
            str[count++] = tolower(str[i]);
        }
    }
    str[count] = '\0';
}

// Function to check if two strings are anagrams
int are_anagrams(char *str1, char *str2) 
{
    int count1[CHAR_RANGE] = {0};
    int count2[CHAR_RANGE] = {0};
    int i;

    // Counting character frequencies in first string
    for (i = 0; str1[i]; i++) 
    {
        count1[(unsigned char)str1[i]]++;
    }

    // Counting character frequencies in second string
    for (i = 0; str2[i]; i++) 
    {
        count2[(unsigned char)str2[i]]++;
    }

    // Comparing character counts
    for (i = 0; i < CHAR_RANGE; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            return 0; // Not anagrams
        }
    }
    return 1; // Anagrams
}

int main() 
{
    char str1[100], str2[100];

    // Input the string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    // Prepare both strings: remove spaces and convert to lowercase
    prepare_string(str1);
    prepare_string(str2);

    // Check if anagrams
    if (are_anagrams(str1, str2)) 
    {
        printf("\nThe strings are anagrams.\n");
    } 
    else 
    {
        printf("\nThe strings are NOT anagrams.\n");
    }

    return 0;
}