#include <stdio.h>

int findFirstOccurrence(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int numbers[] = {2, 4, 4, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;

    printf("Enter the number to find its first occurrence: ");
    scanf("%d", &target);

    int index = findFirstOccurrence(numbers, size, target);

    if (index != -1) {
        printf("First occurrence of %d is at index %d.\n", target, index);
    } else {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
