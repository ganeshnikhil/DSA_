#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements (0, 1, or 2 only): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int low = 0, mid = 0, high = n - 1, temp;
    while (mid <= high) {
        if (a[mid] == 0) {
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;Day
}