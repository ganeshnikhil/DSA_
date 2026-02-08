#include <stdio.h>

int main() {
    int arr[100];
    int n, val, newLength = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (arr[i] != val) {
            arr[newLength] = arr[i];
            newLength++;
        }
    }

    printf("New array after removing %d:\n", val);
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("New length of the array: %d\n", newLength);

    return 0;
}
