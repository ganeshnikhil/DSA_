#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array\n");
    printf("[");
    for (int i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("]");
    printf("\n");
     bubbleSort(arr, n);

    printf("Sorted array: \n");
    printf("[");
    for (int i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("]");
    return 0;
}


