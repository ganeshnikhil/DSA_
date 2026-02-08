#include <stdio.h>

int main() 
{
    int arr[100]; 
    int n; 
    int temp; 
    printf("Enter the size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Incorrect size! Enter from 1 to 100.\n");
        return 1;
    }
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        int swapped = 0; 
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
