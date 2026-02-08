#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) { 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;
    return i;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k - 1)
            return arr[pi];
        else if (pi > k - 1)
            return quickSelect(arr, low, pi - 1, k);
        else
            return quickSelect(arr, pi + 1, high, k);
    }
    return -1;
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = quickSelect(arr, 0, n - 1, k);
    printf("The %dth largest element is %d\n", k, result);

    return 0;
}
