#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 30;

    int result = linearSearch(arr, size, target);
    printf("Index of %d is %d\n", target, result);  // Output: 2
    return 0;
}