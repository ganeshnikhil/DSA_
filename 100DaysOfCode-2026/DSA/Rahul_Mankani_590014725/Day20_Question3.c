#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int compare(const void *a, const void *b) 
{
    return (*(int*)b - *(int*)a); // Sort in descending order
}
int main() 
{
    int arr[MAX];
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX) 
    {
        printf("Invalid size! Enter between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k for kth largest: ");
    scanf("%d", &k);
    if (k <= 0 || k > n) 
    {
        printf("Invalid k! Enter between 1 and %d.\n", n);
        return 1;
    }
    qsort(arr, n, sizeof(int), compare);
    printf("Kth largest element: %d\n", arr[k-1]);
    return 0;
}
