#include<stdio.h>
int search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        if(arr[left] <= arr[mid]) {
            if(arr[left] <= target && target < arr[mid]) right = mid - 1;
            else left = mid + 1;
        } else {
            if(arr[mid] < target && target <= arr[right]) left = mid + 1;
            else right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr1[] = {4, 5, 6, 7, 0, 1, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", search(arr1, size1, 0));
    int arr2[] = {4, 5, 6, 7, 0, 1, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", search(arr2, size2, 3));   
    return 0;
}