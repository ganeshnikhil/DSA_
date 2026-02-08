#include<stdio.h>
int findPeakUtil(int arr[], int left, int right) {
    int mid = left + (right - left) / 2;
    //Check if mid is a peak element
    if ((mid == 0 || arr[mid] > arr[mid - 1]) && (mid == right || arr[mid] > arr[mid + 1])) {
        return mid;
    }
    //If the left neighbor is greater, then there must be a peak in the left half
    if (mid > 0 && arr[mid - 1] > arr[mid]) {
        return findPeakUtil(arr, left, mid - 1);
    }
    //If the right neighbor is greater, then there must be a peak in the right half
    return findPeakUtil(arr, mid + 1, right);
}
int findPeak(int arr[], int size) {
    return findPeakUtil(arr, 0, size - 1);
}

int main() {
    int arr1[] = {1, 3, 20, 4, 1, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", findPeak(arr1, size1));
    int arr2[] = {1, 2, 1, 3, 5, 6, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", findPeak(arr2, size2));   
    return 0;
}