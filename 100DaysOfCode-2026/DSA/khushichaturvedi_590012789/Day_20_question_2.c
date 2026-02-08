#include <stdio.h>

void merge(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n)
        result[k++] = a[i++];
    while (j < m)
        result[k++] = b[j++];
}

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6, 8};
    int result[7];

    merge(a, 3, b, 4, result);

    printf("Merged Array: ");
    for (int i = 0; i < 7; i++)
        printf("%d ", result[i]);

    return 0;
}
