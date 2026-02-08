#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int size = 6;

    int maxVal = findMax(arr, size);
    printf("Maximum value is %d\n", maxVal);  // Output: 9
    return 0;
}