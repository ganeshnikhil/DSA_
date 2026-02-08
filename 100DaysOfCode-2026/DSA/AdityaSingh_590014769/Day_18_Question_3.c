// 3: Sort Colors (Dutch National Flag)
// Given an array with elements 0, 1, 2, sort them efficiently in one pass.
// Place all 0s first, followed by 1s, then 2s.

#include <stdio.h>

void func(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low++] = arr[mid];
            arr[mid++] = temp;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high--] = temp;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements (0, 1, 2 only):\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    func(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}