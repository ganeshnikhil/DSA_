#include <stdio.h>

int findMaximum(int arr[], int size) {
    int max = arr[0];  // Start by assuming the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];  // Update max if current element is greater
    }

    return max;
}

int main() {
    int n;

    // Get array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display the maximum
    int maxElement = findMaximum(arr, n);
    printf("The maximum element is: %d\n", maxElement);

    return 0;
}
