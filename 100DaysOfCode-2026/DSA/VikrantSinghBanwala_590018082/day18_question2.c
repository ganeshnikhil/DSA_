#include<stdio.h>
void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr1[] = {12, 11, 13, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    insertionSort(arr1, size1);
    for(int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\n");
    int arr2[] = {31, 41, 59, 26, 53};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    insertionSort(arr2, size2);
    for(int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\n");
    int arr3[] = {4, 2, 7, 1, 3};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    insertionSort(arr3, size3);
    for(int i = 0; i < size3; i++) printf("%d ", arr3[i]);
    printf("\n");   
    return 0;
}