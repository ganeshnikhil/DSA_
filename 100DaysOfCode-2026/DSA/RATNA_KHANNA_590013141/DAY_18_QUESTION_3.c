#include <stdio.h>
void sortColors(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    int temp;
    while (mid <= high) 
    {
        if (arr[mid] == 0) 
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } 
        else if (arr[mid] == 1) 
        {
            mid++;
        } else 
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
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
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (only 0, 1, 2 are allowed):\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array:\n");
    printArray(arr, n);
    sortColors(arr, n);
    printf("Sorted array (0s, 1s, 2s order):\n");
    printArray(arr, n);
    return 0;
}
