
import heapq

def find_kth_largest(nums, k):
    min_heap = nums[:k]
    heapq.heapify(min_heap)

    for num in nums[k:]:
        if num > min_heap[0]: 
            heapq.heappushpop(min_heap, num)

    return min_heap[0]
array = [7, 10, 4, 3, 20, 15]
k = 3

result = find_kth_largest(array, k)
print(result)