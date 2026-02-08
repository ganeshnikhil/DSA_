def findMax(arr):
    if not arr:
        return None  

    max_value = arr[0]

    for num in arr[1:]:
        if num > max_value:
            max_value = num

    return max_value

inp = input("Enter integers separated by spaces: ")
arr = list(map(int, inp.strip().split()))

maximum = findMax(arr)
if maximum is not None:
    print("Maximum element:", maximum)
else:
    print("Array is empty.")
