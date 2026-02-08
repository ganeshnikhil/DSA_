#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 12, 8, 20, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
