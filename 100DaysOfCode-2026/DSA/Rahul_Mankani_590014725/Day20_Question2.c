#include <stdio.h>
#define MAX 100

int main() 
{
    int arr1[MAX], arr2[MAX], merged[2*MAX];
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    if (n1 <= 0 || n1 > MAX) 
    {
        printf("Invalid size! Enter between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter sorted elements for first array: ");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    if (n2 <= 0 || n2 > MAX) 
    {
        printf("Invalid size! Enter between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter sorted elements for second array: ");
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) 
    {
        if (arr1[i] <= arr2[j]) 
        {
            merged[k] = arr1[i];
            i++;
        } 
        else 
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    printf("Merged sorted array: ");
    for (int i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
