#include <stdio.h>

int firstOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
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
    int n, target, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int index = firstOccurrence(arr, n, target);
    if (index != -1)
        printf("First occurrence of %d is at index: %d\n", target, index);
    else
        printf("Element %d not found in array.\n", target);

    return 0;
} 
