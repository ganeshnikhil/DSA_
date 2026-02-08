#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------ 1. Simple Array Sorting using qsort ------------
int compare_ints(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void sort_with_builtin(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare_ints);
    printf("Sorted using built-in qsort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// ------------ 2. Sort Strings by Length (Stable) ------------
typedef struct {
    char str[100];
    int original_index;
} StringWithIndex;

void sort_strings_by_length(char arr[][100], int n) {
    StringWithIndex temp[n];
    for (int i = 0; i < n; i++) {
        strcpy(temp[i].str, arr[i]);
        temp[i].original_index = i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(temp[j].str) > strlen(temp[j + 1].str)) {
                StringWithIndex swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    printf("Strings sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", temp[i].str);
    }
    printf("\n");
}

// ------------ 3. Bubble Sort Implementation ------------
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted using Bubble Sort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// ------------ Main Function for Testing All ------------
int main() {
    // Test 1: Built-in Sort
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    sort_with_builtin(arr1, size1);

    // Test 2: Sort Strings by Length
    char strings[4][100] = {"apple", "pie", "washington", "cat"};
    sort_strings_by_length(strings, 4);

    // Test 3: Bubble Sort
    int arr2[] = {3, 7, 4, 1, 6, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    bubble_sort(arr2, size2);

    return 0;
}
