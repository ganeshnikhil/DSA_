#include<stdio.h>
int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) ;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 7;
    int result1 = binarySearch(arr1, size1, target1);
    printf("%d\n", result1);
    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = binarySearch(arr2, size2, target2);
    printf("%d\n", result2);
    return 0;
}
