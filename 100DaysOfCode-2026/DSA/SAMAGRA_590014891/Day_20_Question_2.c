#include <stdio.h>

void mergeSortedArrays(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < n) {
        result[k++] = a[i++];
    }

    while (j < m) {
        result[k++] = b[j++];
    }
}

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int a[] = {10, 30, 50};
    int b[] = {20, 40, 60, 70};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int result[n + m];

    mergeSortedArrays(a, n, b, m, result);
    printArray(result, n + m);

    return 0;
}
