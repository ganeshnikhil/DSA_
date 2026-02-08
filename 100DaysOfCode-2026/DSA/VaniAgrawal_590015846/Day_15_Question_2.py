# Sort strings by length while preserving relative order for equal-length strings.
arr =list(map(str, input("enter list :").split())) 

n = len(arr)

i = 0
while i < n - 1:
    j = 0
    while j < n - i - 1:
        if len(arr[j]) > len(arr[j + 1]):
            # Swap to ensure shorter string comes first
            temp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = temp
        j += 1
    i += 1

print(arr)
