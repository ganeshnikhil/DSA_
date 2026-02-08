#include <stdio.h>

// Function 1: Linear Search
int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Not found
}

// Function 2: Count Occurrences
int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    return count;
}

// Function 3: Find Maximum Element
int findMaximum(int arr[], int size) {
    int max = arr[0]; // Assume first element is max
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Update max if larger value found
        }
    }
    return max;
}

// Main function to test all the above
int main() {
    int arr[100], size, target;

    // Input array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target value
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Perform Linear Search
    int index = linearSearch(arr, size, target);
    if(index != -1)
        printf("Linear Search: Element found at index %d\n", index);
    else
        printf("Linear Search: Element not found\n");

    // Count Occurrences
    int count = countOccurrences(arr, size, target);
    printf("Count Occurrences: Element %d appears %d time(s)\n", target, count);

    // Find Maximum Element
    int max = findMaximum(arr, size);
    printf("Find Maximum: The maximum element is %d\n", max);

    return 0;
}
