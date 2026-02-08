#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison function for stable sort by string length
int compareByLength(const void *a, const void *b) {
    const char *str_a = *(const char**)a;
    const char *str_b = *(const char**)b;
    
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);
    
    // Return difference in lengths
    // If lengths are equal, return 0 to maintain stable sort
    return len_a - len_b;
}

void printStringArray(char *arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("\"%s\"", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    // Example 1
    char *arr1[] = {"apple", "pie", "washington", "cat"};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Input: ");
    printStringArray(arr1, size1);
    
    qsort(arr1, size1, sizeof(char*), compareByLength);
    
    printf("Output: ");
    printStringArray(arr1, size1);
    printf("\n");
    
    // Example 2
    char *arr2[] = {"hello", "world", "a", "programming", "fun"};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Input: ");
    printStringArray(arr2, size2);
    
    qsort(arr2, size2, sizeof(char*), compareByLength);
    
    printf("Output: ");
    printStringArray(arr2, size2);
    printf("\n");
    
    // Example 3
    char *arr3[] = {"java", "python", "c", "javascript"};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Input: ");
    printStringArray(arr3, size3);
    
    qsort(arr3, size3, sizeof(char*), compareByLength);
    
    printf("Output: ");
    printStringArray(arr3, size3);
    
    return 0;
}