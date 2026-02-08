#include <stdio.h>

int main() {
    int a[10], b[10], result[20];
    int n, m, i, j, k;
    
    printf("Enter number of elements in first array (max 10): ");
    scanf("%d", &n);
    
    printf("Enter %d sorted numbers for first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter number of elements in second array (max 10): ");
    scanf("%d", &m);
    
    printf("Enter %d sorted numbers for second array:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    
    printf("\nFirst array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\nSecond array: ");
    for (i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }
    
    i = 0;
    j = 0;
    k = 0;
    
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            result[k] = a[i];
            i++;
        } else {
            result[k] = b[j];
            j++;
        }
        k++;
    }
    
    while (i < n) {
        result[k] = a[i];
        i++;
        k++;
    }
    
    while (j < m) {
        result[k] = b[j];
        j++;
        k++;
    }
    
    printf("\nMerged array: ");
    for (i = 0; i < n + m; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}