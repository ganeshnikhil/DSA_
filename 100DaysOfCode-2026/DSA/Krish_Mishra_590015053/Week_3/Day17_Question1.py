def binary_search_user_defined():
    arr = list(map(int, input("Enter the sorted array elements (space-separated): ").split()))
    
    target = int(input("Enter the target element to search: "))
    left = 0
    right = len(arr) - 1
    
    # Binary Search Logic
    
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            print(f"Element found at index {mid}")
            return
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    print("Element not found (Output: -1)")
