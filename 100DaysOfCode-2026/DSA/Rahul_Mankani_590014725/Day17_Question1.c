#include <stdio.h>

int main() 
{
    int arr[100]; 
    int n; 
    int target; 
    int index = -1;     
    printf("Enter the size: ");
    scanf("%d", &n);    
    if (n <= 0 || n > 100) 
    {
        printf("Incorrect size! Enter data from 1 to 100.\n");
        return 1;
    }    
    printf("Enter the Sorted numbers: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }    
    printf("Which number do you want to find ");
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
        if (arr[mid] < target) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }    
    if (index != -1) 
    {
        printf("Number %d found at index %d.\n", target, index);
    } 
    else 
    {
        printf("Number %d is not in the array.\n", target);
    }
    return 0;
}
