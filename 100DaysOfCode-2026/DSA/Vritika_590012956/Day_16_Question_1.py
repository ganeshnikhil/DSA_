arr = list(map(int, input("Enter array elements: ").split()))
target = int(input("Enter target element: "))

found = -1
for i in range(len(arr)):
    if arr[i] == target:
        found = i
        break

print("Output:", found)
