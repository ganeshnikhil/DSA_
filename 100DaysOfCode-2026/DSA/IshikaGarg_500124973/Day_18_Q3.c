#include <stdio.h>

void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low++] = arr[mid];
            arr[mid++] = temp;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high--] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortColors(arr, n);
    printf("Sorted colors (0s, 1s, 2s):\n");
    printArray(arr, n);
    return 0;
}
