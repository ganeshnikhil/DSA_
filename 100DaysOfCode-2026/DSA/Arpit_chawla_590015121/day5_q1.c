#include <stdio.h>

int main() {
    int arr[100];
    int n, unique = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (all appear twice except one):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        unique ^= arr[i];  // XOR with each element
    }

    printf("The element that appears only once is: %d\n", unique);

    return 0;
}
