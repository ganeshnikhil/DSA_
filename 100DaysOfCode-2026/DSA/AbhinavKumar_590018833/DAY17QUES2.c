#include <stdio.h>

int firstOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; 
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int arr1[] = {1, 2, 2, 2, 3, 4};
    printf("%d\n", firstOccurrence(arr1, 6, 2)); 

    int arr2[] = {5, 7, 7, 8, 8, 8, 10};
    printf("%d\n", firstOccurrence(arr2, 7, 8)); 

    int arr3[] = {1, 1, 1, 2, 3, 3};
    printf("%d\n", firstOccurrence(arr3, 6, 1)); 

    return 0;
}
