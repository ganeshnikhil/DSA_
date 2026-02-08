#include <stdio.h>

int main() {
    int arr[20], n, k, i, j, temp;
    
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter which largest number you want (1st, 2nd, 3rd, etc.): ");
    scanf("%d", &k);
    
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nSorted array (largest to smallest): ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nThe %d largest number is: %d\n", k, arr[k - 1]);
    
    return 0;
}