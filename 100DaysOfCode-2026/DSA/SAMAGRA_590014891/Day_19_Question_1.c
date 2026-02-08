#include <stdio.h>

int search(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr1[] = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    printf("%d\n", search(arr1, 7, target1)); 
    int target2 = 3;
    printf("%d\n", search(arr1, 7, target2)); 

    int arr2[] = {11, 13, 15, 17, 19, 2, 3, 6, 7};
    int target3 = 6;
    printf("%d\n", search(arr2, 9, target3)); 
    return 0;
}
