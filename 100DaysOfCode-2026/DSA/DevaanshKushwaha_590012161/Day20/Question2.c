#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from both arrays in sorted order
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    // Copy any remaining elements from arr1
    while (i < size1)
        result[k++] = arr1[i++];

    // Copy any remaining elements from arr2
    while (j < size2)
        result[k++] = arr2[j++];
}

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &size1);
    printf("Enter %d elements (in ascending order): ", size1);
    for (int i = 0; i < size1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &size2);
    printf("Enter %d elements (in ascending order): ", size2);
    for (int i = 0; i < size2; i++)
        scanf("%d", &arr2[i]);

    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    printf("Merged sorted array:\n");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);

    return 0;
}
