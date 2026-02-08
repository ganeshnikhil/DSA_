#include <stdio.h>

int firstOccurrence(int arr[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int target = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", firstOccurrence(arr, size, target));
    return 0;
}
