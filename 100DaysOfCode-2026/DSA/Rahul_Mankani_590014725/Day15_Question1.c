#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() 
{
    int arr[100]; 
    int n; 
    printf("Enter the size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Incorrect Size! Enter data from 1 to 100.\n");
        return 1;
    }
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
