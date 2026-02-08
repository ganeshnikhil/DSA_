#include <stdio.h>

int arr[100];
int size;
int k;
int i, j, kt;

int main() {
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k : ");
    scanf("%d", &k);

    for(i = 0; i < size; i++) {
        kt = 1;
        for(j = 0; j < size; j++) {
            if(arr[i] < arr[j]) {
                kt++;
            }
        }
        if(kt == k) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    printf("None\n");
}
