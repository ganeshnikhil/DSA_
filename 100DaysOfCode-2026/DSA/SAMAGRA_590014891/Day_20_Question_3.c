#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx])
                maxIdx = j;
        }
        swap(&arr[i], &arr[maxIdx]);
    }
}

int findKthLargest(int arr[], int n, int k) {
    sortDescending(arr, n);
    return arr[k - 1];
}

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of K: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of K. It should be between 1 and %d.\n", n);
        return 1;
    }

    int kthLargest = findKthLargest(arr, n, k);
    printf("The %dth largest element is: %d\n", k, kthLargest);

    return 0;
}
