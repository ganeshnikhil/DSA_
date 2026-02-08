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
    int arr[] = {1, 2, 2, 2, 3, 4};
    int target = 2;
    int index = firstOccurrence(arr, 6, target);
    printf("Output: %d\n", index); 
    return 0;
}