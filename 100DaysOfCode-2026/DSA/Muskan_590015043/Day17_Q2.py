#  First Occurrence
def first_occurrence(arr, target):
    left = 0
    right = len(arr) - 1
    result = -1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            result = mid  # Record the index
            right = mid - 1  # Keep searching to the left
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return result

# Example usage
arr = list(map(int, input("Enter the sorted array elements (with possible duplicates): ").split()))
arr.sort()
target = int(input("Enter the target: "))

index = first_occurrence(arr, target)
print(index)
