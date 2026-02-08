#include <stdio.h>

int main() 
{
    int arr[100];
    int n;
    int target;
    int index = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Invalid size! Enter between 1 and 100.\n");
        return 1;
    }
    printf("Enter rotated sorted elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find: ");
    scanf("%d", &target);
    int left = 0;
    int right = n - 1;
    while (left <= right) 
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target) 
        {
            index = mid;
            break;
        }
        if (arr[left] <= arr[mid]) 
        {
            if (target >= arr[left] && target < arr[mid]) 
            {
                right = mid - 1;
            } 
            else 
            {
                left = mid + 1;
            }
        } 
        else 
        {
            if (target > arr[mid] && target <= arr[right]) 
            {
                left = mid + 1;
            } 
            else 
            {
                right = mid - 1;
            }
        }
    }
    if (index != -1) 
    {
        printf("Number %d found at index %d.\n", target, index);
    } 
    else 
    {
        printf("Number %d not found in array.\n", target);
    }
    return 0;
}
