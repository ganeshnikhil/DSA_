#include <stdio.h>

int firstOccurrence(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        return result;
    }
}
int main()
{
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted elements (duplicates allowed):\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    int index = firstOccurrence(arr, size, target);

    if (index != -1)
        printf("First occurrence of %d is at index %d.\n", target, index);
    else
        printf("%d not found in the array.\n", target);

    return 0;
}
