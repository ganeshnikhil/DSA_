#include <stdio.h>

int firstOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // Continue searching on the left
        } else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return result;
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 8, 10};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = firstOccurrence(arr, size, target);
    printf("%d\n", index);  
    return 0;
}
