#include <stdio.h>

int main() {
    int arr[8], i, j, temp;

    printf("Enter numbers:\n");
    for(i=0; i<8; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i < 8 - 1; i++) {
        for(j=0; j < 8 - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
