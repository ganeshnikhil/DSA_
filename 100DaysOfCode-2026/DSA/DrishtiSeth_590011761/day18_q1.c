#include <stdio.h>
void selection_sort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr1[] = {29, 10, 14, 37, 13};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    selection_sort(arr1, n1);
    print_array(arr1, n1);

    int arr2[] = {64, 25, 12, 22, 11};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    selection_sort(arr2, n2);
    print_array(arr2, n2);

    int arr3[] = {5, 3, 8, 1, 6};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    selection_sort(arr3, n3);
    print_array(arr3, n3);

    return 0;
}