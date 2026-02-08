#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {12, 11, 13, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {31, 41, 59, 26, 53};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {4, 2, 7, 1, 3};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    insertionSort(arr1, size1);
    insertionSort(arr2, size2);
    insertionSort(arr3, size3);

    printArray(arr1, size1);
    printArray(arr2, size2);
    printArray(arr3, size3);

    return 0;
}
