#include <stdio.h>
#include <limits.h>

void heapify(int heap[], int i, int size) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;
    if (right < size && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        int temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;
        heapify(heap, smallest, size);
    }
}

void buildMinHeap(int heap[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(heap, i, size);
}

int findKthLargest(int arr[], int n, int k) {
    int heap[k];
    for (int i = 0; i < k; i++)
        heap[i] = arr[i];

    buildMinHeap(heap, k);

    for (int i = k; i < n; i++) {
        if (arr[i] > heap[0]) {
            heap[0] = arr[i];
            heapify(heap, 0, k);
        }
    }

    return heap[0];  // Top of min-heap is the Kth largest
}

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter K (for Kth largest): ");
    scanf("%d", &k);

    if (k > 0 && k <= n) {
        int result = findKthLargest(arr, n, k);
        printf("The %d%s largest element is: %d\n", k,
            (k == 1 ? "st" : (k == 2 ? "nd" : (k == 3 ? "rd" : "th"))),
            result);
    } else {
        printf("Invalid value of K.\n");
    }

    return 0;
}
