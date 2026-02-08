def linearSearch(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  
    return -1  

inp = input("Enter integers separated by spaces: ")
arr = list(map(int, inp.strip().split()))

target = int(input("Enter the target element to search for: "))

index = linearSearch(arr, target)

if index != -1:
    print(f"Target found at index: {index}")
else:
    print("Target not found. Returned -1.")
