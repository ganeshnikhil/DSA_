#include <stdio.h>
#include <stdlib.h>

// Swapping utility
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify function to maintain min-heap
void minHeapify(int heap[], int i, int heapSize) 
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < heapSize && heap[left] < heap[smallest])
        smallest = left;
    if (right < heapSize && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) 
    {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, smallest, heapSize);
    }
}

// Function to insert in min-heap
void insertHeap(int heap[], int *heapSize, int value, int k) 
{
    if (*heapSize < k) 
    {
        heap[*heapSize] = value;
        int i = *heapSize;
        (*heapSize)++;

        // Up-heap (bubble up)
        while (i != 0 && heap[(i - 1) / 2] > heap[i]) 
        {
            swap(&heap[i], &heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    } 
    else if (value > heap[0]) 
    {
        heap[0] = value;
        minHeapify(heap, 0, *heapSize);
    }
}

int findKthLargest(int arr[], int n, int k) 
{
    int heap[k];
    int heapSize = 0;

    for (int i = 0; i < n; i++) 
    {
        insertHeap(heap, &heapSize, arr[i], k);
    }

    return heap[0]; // Root of min-heap = Kth largest
}

int main() 
{
    int n, k;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of K (1 for largest, 2 for second largest, etc.): ");
    scanf("%d", &k);

    if (k > 0 && k <= n) 
    {
        int kthLargest = findKthLargest(arr, n, k);
        printf("The %d%s largest element is: %d\n", k,
               (k == 1) ? "st" : (k == 2) ? "nd" : (k == 3) ? "rd" : "th",
               kthLargest);
    } 
    else 
    {
        printf("Invalid value of K. Must be between 1 and %d.\n", n);
    }

    return 0;
}
