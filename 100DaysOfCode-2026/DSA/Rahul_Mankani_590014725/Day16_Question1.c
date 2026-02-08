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
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            index = i;
            break;
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
