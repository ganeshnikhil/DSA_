#include <stdio.h>

int findMaximum(int arr[], int size) {
    int max = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, -7, 12, 5, 9, -2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximum = findMaximum(arr, size);
    printf("Maximum element is %d\n", maximum);
    return 0;
}
