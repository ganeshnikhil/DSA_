#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {29, 10, 14, 37, 13};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {64, 25, 12, 22, 11};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {5, 3, 8, 1, 6};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    selectionSort(arr1, size1);
    selectionSort(arr2, size2);
    selectionSort(arr3, size3);

    printArray(arr1, size1);
    printArray(arr2, size2);
    printArray(arr3, size3);

    return 0;
}
