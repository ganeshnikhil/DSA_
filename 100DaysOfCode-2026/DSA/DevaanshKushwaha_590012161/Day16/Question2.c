#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            count++;  // Bump the count when you see the target
    }

    return count;
}

int main() {
    int n, target;

    // User input for size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Getting elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the target to count
    printf("Enter the target number: ");
    scanf("%d", &target);

    // Count it up and print the result
    int frequency = countOccurrences(arr, n, target);
    printf("Target %d appears %d time(s) in the array.\n", target, frequency);

    return 0;
}
