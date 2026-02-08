#include<stdio.h>
int firstOccurrence(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}
int main(){
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 2;
    int result1 = firstOccurrence(arr1, size1, target1);
    printf("%d\n", result1);
    int arr2[] = {5, 7, 7, 8, 8, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 8;
    int result2 = firstOccurrence(arr2, size2, target2);
    printf("%d\n", result2);
    return 0;
}
