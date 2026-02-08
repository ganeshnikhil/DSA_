#include <stdio.h>

int main() {
    int arr[8], i, j, temp;

    printf("Enter numbers: ");
    for(i=0; i<8; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<8; i++) {
        for(j=i+1; j<8; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i=0; i<8; i++) {
        printf("%d ", arr[i]);
    }

return 0;
}
