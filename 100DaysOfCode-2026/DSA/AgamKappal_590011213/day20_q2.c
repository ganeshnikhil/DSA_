
#include <stdio.h>

void mergeArrays(int a[], int n1, int b[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n1)
        result[k++] = a[i++];
    
    while (j < n2)
        result[k++] = b[j++];
}

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int result[n1 + n2];

    mergeArrays(a, n1, b, n2, result);

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
