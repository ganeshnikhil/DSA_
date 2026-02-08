#include<stdio.h>
void bubbleSort(int arr[], int size) {
    int swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = 0;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}
int main() {
    int arr1[] = {5, 2, 8, 1, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, size1);
    printf("[");
    for (int i = 0; i < size1; i++) {
        printf("%d", arr1[i]);
        if (i < size1 - 1) printf(", ");
    }
    printf("]\n");
    int arr2[] = {3, 7, 4, 1, 6, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, size2);
    printf("[");
    for (int i = 0; i < size2; i++) {
        printf("%d", arr2[i]);
        if (i < size2 - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}