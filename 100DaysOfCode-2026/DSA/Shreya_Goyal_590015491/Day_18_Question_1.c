#include <stdio.h>

int main() {
    int arr[5], i, j, mi, temp;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++) {  
        mi = i;
        for(j = i + 1; j < 5; j++) {
            if(arr[j] < arr[mi]) {
                mi = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[mi];
        arr[mi] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
