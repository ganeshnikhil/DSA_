#include <stdio.h>
void insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr1[] = {31, 41, 59, 26, 53};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    insertion_sort(arr1, n1);
    print_array(arr1, n1);

    int arr2[] = {4, 2, 7, 1, 3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    insertion_sort(arr2, n2);
    print_array(arr2, n2);

    return 0;
}