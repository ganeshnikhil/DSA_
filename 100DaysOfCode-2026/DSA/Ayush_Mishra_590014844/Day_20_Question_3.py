import heapq

def kth_largest(arr, k):
    return heapq.nlargest(k, arr)[-1]

arr = list(map(int, input("Enter array elements: ").split()))
k = int(input("Enter value of K: "))
print(f"{k}th largest element is:", kth_largest(arr, k))
