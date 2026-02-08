#include <stdio.h>
void sortColors(int arr[], int n) 
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
      {
        switch (arr[mid]) 
        {
            case 0:
                {
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                }
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                }
                high--;
                break;
        }
    }
}
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr[] = {2, 0, 1, 2, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr, n);

    sortColors(arr, n);
    printf("Sorted array (0s, 1s, then 2s):\n");
    printArray(arr, n);
    return 0;
}
