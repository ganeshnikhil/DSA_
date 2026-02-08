#include <stdio.h>

int countOccurrences(int arr[], int size, int target)
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
    int size, target;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &target);

    int result = countOccurrences(arr, size, target);

    printf("Element %d appears %d time(s) in the array.\n", target, result);

    return 0;
}
