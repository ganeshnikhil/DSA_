#include <stdio.h>

int main() {
    int arr[100], result[100];
    int n, k;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k (steps to rotate): ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
