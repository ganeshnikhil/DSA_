#include <stdio.h>

int search(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;

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
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = search(arr, n, target);

    if (index != -1)
        printf("Target found at index %d\n", index);
    else
        printf("Target not found\n");

    return 0;
}
