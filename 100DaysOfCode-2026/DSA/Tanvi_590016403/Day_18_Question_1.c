#include <stdio.h>

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 1. Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        // Swap
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// 2. Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 3. Sort Colors (Dutch National Flag Sort)
void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap arr[low] and arr[mid]
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            // Swap arr[mid] and arr[high]
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

// Main driver function
int main() {
    int selArr[] = {29, 10, 14, 37, 13};
    int insArr[] = {12, 11, 13, 5, 6};
    int colorArr[] = {2, 0, 2, 1, 1, 0};

    int selSize = sizeof(selArr) / sizeof(selArr[0]);
    int insSize = sizeof(insArr) / sizeof(insArr[0]);
    int colorSize = sizeof(colorArr) / sizeof(colorArr[0]);

    printf("Original Selection Sort Array:\n");
    printArray(selArr, selSize);
    selectionSort(selArr, selSize);
    printf("Sorted with Selection Sort:\n");
    printArray(selArr, selSize);

    printf("\nOriginal Insertion Sort Array:\n");
    printArray(insArr, insSize);
    insertionSort(insArr, insSize);
    printf("Sorted with Insertion Sort:\n");
    printArray(insArr, insSize);

    printf("\nOriginal Color Sort Array:\n");
    printArray(colorArr, colorSize);
    sortColors(colorArr, colorSize);
    printf("Sorted with Dutch Flag Sort:\n");
    printArray(colorArr, colorSize);

    return 0;
}
