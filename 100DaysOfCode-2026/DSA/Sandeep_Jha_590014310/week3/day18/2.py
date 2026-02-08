def first_occur(arr, target):
    for e in arr:
        if e == target:
            return arr.index(e)
    return -1

print(first_occur(arr=list(map(int, input("Enter the array(space-separated): ").split())), target=int(input("Enter the target element: "))))