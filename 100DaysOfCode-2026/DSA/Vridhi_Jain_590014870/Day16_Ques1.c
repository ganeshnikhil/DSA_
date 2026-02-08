#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}