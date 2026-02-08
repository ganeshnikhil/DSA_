import heapq

def kth_largest(arr, k):
    return heapq.nlargest(k, arr)[-1]

print(kth_largest([3, 2, 1, 5, 6, 4], 2))
print(kth_largest([7, 10, 4, 3, 20, 15], 3))
print(kth_largest([1, 23, 12, 9, 30, 2, 50], 4))
