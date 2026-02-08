#include <stdio.h>

int main() {
    int arr[7], n = 7, i;
    int left, right, mid;
    
    printf("Enter 7 numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    left = 0;
    right = n - 1;

    while(left <= right) {
        mid = (left + right) / 2;

        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
            (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            printf("Peak: %d\n", mid);
            break;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return 0;
}
