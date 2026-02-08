import heapq

def K_largest_element(array, K):
    if K < 0 or K > len(array) - 1:
        return -1
    else:
        minimum_heap = array[:K]
        heapq.heapify(minimum_heap)
        for num in array[K:]:
            if num > minimum_heap[0]:
                heapq.heappop(minimum_heap)
                heapq.heappush(minimum_heap, num)
        return minimum_heap[0]

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    K = int(input("Enter the value of K : "))
    print(K_largest_element(array, K))
except:
    print("Invalid input. Please enter a valid input.")
