#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);  // Descending order
}

int findKthLargest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compare);
    return arr[k - 1];
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int kthLargest = findKthLargest(arr, n, k);
    printf("The %dth largest element is: %d\n", k, kthLargest);

    return 0;
}
