#include <stdio.h>

int main() {
    int arr[6], i, j, temp;

    printf("Enter 6 numbers:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 6; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Second largest number: %d\n", arr[1]);

    return 0;
}

