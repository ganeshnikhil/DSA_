#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    int arr3[] = {10, 20, 30, 40, 50};

    printf("%d\n", binarySearch(arr1, 6, 7));
    printf("%d\n", binarySearch(arr2, 7, 5));
    printf("%d\n", binarySearch(arr3, 5, 30));

    return 0;
}
