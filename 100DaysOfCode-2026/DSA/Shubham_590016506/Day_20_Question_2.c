#include <stdio.h>

void merge_arrays(int a[], int n1, int b[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
        result[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n1) result[k++] = a[i++];
    while (j < n2) result[k++] = b[j++];
}

int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6}, result[6];
    merge_arrays(a, 3, b, 3, result);
    for (int i = 0; i < 6; i++)
        printf("%d ", result[i]);
    return 0;
}