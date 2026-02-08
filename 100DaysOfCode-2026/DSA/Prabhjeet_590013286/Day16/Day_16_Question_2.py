def fn(arr, target):
    count = 0
    for num in arr:
        if num == target:
            count += 1
    return count


arr_input = input("Enter the array elements separated by spaces: ")
arr = list(map(int, arr_input.strip().split()))
target = int(input("Enter the target number to count: "))
result = fn(arr, target)
print(f"The target number {target} appears {result} time(s) in the array.")
