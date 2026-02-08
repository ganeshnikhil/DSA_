#include <stdio.h>

// Function to perform insertion sort (card-sorting approach)
void insertionSort(int arr[], int n) 
{
    int i, key, j;
    
    for (i = 1; i < n; i++) 
    {
        key = arr[i];  // Select the current card to insert
        j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // Insert the card in its correct position
    }
}

// Function to print an array
void printArray(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n, i;
    
    printf("Enter the number of elements to sort: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: \n");
    printArray(arr, n);
    
    insertionSort(arr, n);
    
    printf("Sorted array in ascending order: \n");
    printArray(arr, n);
    
    return 0;
}