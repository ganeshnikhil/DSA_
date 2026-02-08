#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9, 11};
    printf("%d\n", binarySearch(arr1, 6, 7));  

    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    printf("%d\n", binarySearch(arr2, 7, 5));  

    int arr3[] = {10, 20, 30, 40, 50};
    printf("%d\n", binarySearch(arr3, 5, 30)); 

    return 0;
}
