#include<stdio.h>
#include<stdlib.h>
int partition(int arr[], int left, int right, int pivotIndex) {
    int pivotValue = arr[pivotIndex];
    int storeIndex = left;
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[right];
    arr[right] = temp;
    for (int i = left; i < right; i++) {
        if (arr[i] < pivotValue) {
            temp = arr[storeIndex];
            arr[storeIndex] = arr[i];
            arr[i] = temp;
            storeIndex++;
        }
    }
    temp = arr[storeIndex];
    arr[storeIndex] = arr[right];
    arr[right] = temp;
    return storeIndex;
}
int quickSelect(int arr[], int left, int right, int k) {
    if (left == right) {
        return arr[left];
    }
    int pivotIndex = left + rand() % (right - left + 1);
    pivotIndex = partition(arr, left, right, pivotIndex);
    if (k == pivotIndex) {
        return arr[k];
    } else if (k < pivotIndex) {
        return quickSelect(arr, left, pivotIndex - 1, k);
    } else {
        return quickSelect(arr, pivotIndex + 1, right, k);
    }
}
int findKthLargest(int arr[], int size, int k) {
    return quickSelect(arr, 0, size - 1, size - k);
}
int main() {
    int arr1[] = {3, 2, 1, 5, 6, 4};
    int k1 = 2;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", findKthLargest(arr1, size1, k1));
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int k2 = 3;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", findKthLargest(arr2, size2, k2));
    return 0;
}