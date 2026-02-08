#include <stdio.h>

int main() 
{
    int arr[100];
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Invalid size! Enter between 1 and 100.\n");
        return 1;
    }
    printf("Enter elements (0, 1, or 2 only): ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 2) 
        {
            printf("Invalid input! Use only 0, 1, or 2.\n");
            return 1;
        }
    }
    int low = 0;
    int mid = 0;
    int high = n - 1;
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
        }
        else 
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
