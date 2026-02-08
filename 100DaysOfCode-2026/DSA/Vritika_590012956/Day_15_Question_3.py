numbers = input("Enter numbers separated by spaces: ")
arr = [int(x) for x in numbers.split()]

# Bubble sort 
n = len(arr)
for i in range(n):
    for j in range(n - 1):
        if arr[j] > arr[j + 1]:
            # Swap elements
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print("Sorted list:", arr)
