def first_occurrence_user_defined():
    arr = list(map(int, input("Enter the sorted array elements (space-separated): ").split()))

    target = int(input("Enter the target element to find first occurrence of: "))
    
    left = 0
    right = len(arr) - 1
    result = -1 

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            result = mid    
            right = mid - 1 
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    if result != -1:
        print(f"First occurrence found at index {result}")
    else:
        print("Element not found (Output: -1)")
