#include <stdio.h>

int main() 
{
    int arr[100];
    int n;
    int peak = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Invalid size! Enter between 1 and 100.\n");
        return 1;
    }
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = n - 1;
    while (left <= right) 
    {
        int mid = (left + right) / 2;
        if ((mid == 0 || arr[mid] > arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] > arr[mid + 1])) 
        {
            peak = mid;
            break;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid]) 
        {
            right = mid - 1;
        }
        else 
        {
            left = mid + 1;
        }
    }
    if (peak != -1) 
    {
        printf("Peak element %d found at index %d.\n", arr[peak], peak);
    } 
    else 
    {
        printf("No peak element found.\n");
    }
    return 0;
}
