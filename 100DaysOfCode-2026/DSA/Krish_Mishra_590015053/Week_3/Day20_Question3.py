import heapq

def find_kth_largest(arr, k):
    min_heap = arr[:k]
    heapq.heapify(min_heap)

    for num in arr[k:]:
        if num > min_heap[0]:
            heapq.heappushpop(min_heap, num)

    return min_heap[0]
arr = list(map(int, input("Enter the array elements (space-separated): ").split()))
k = int(input("Enter the value of K: "))

result = find_kth_largest(arr, k)
print(f"{k}th Largest Element:", result)
