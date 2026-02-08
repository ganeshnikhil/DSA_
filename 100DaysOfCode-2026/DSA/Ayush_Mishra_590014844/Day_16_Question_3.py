def find_max(arr):
    return max(arr) if arr else None

arr = list(map(int, input("Enter array elements: ").split()))
result = find_max(arr)
print(f"Maximum element: {result}")
