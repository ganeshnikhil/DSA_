#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {-4, -1, -7, -3, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);

    printf("Maximum element is %d\n", max);

    return 0;
}
