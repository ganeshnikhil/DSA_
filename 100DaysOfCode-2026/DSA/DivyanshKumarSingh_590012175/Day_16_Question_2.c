#include <stdio.h>

int countFrequency(int arr[], int size, int target) 
{
    int count = 0;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            count++;
        }
    }

    return count;
}

int main() 
{
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to count: ");
    scanf("%d", &target);

    int frequency = countFrequency(arr, n, target);

    printf("The target %d appears %d time(s) in the array.\n", target, frequency);

    return 0;
}
