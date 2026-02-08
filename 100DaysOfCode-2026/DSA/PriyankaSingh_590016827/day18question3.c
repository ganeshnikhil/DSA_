#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Dutch National Flag (three-way partitioning) algorithm
void sortColors(int nums[], int n) 
{
    int low = 0;        // Pointer for 0s (red)
    int mid = 0;        // Pointer for current element (white)
    int high = n - 1;   // Pointer for 2s (blue)

    while (mid <= high) 
    {
        switch (nums[mid]) 
        {
            case 0:
                swap(&nums[low++], &nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&nums[mid], &nums[high--]);
                break;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;
    
    printf("Enter the number of elements (0s, 1s, and 2s): ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers (only 0, 1, or 2):\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        // Validate input
        if (arr[i] < 0 || arr[i] > 2) 
        {
            printf("Invalid input! Only 0, 1, or 2 allowed.\n");
            return 1;
        }
    }
    
    printf("Original array: ");
    printArray(arr, n);
    
    sortColors(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}