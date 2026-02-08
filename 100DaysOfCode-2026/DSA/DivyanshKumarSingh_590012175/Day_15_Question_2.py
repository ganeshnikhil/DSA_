def sortByLength(arr):
    n = len(arr)


    for i in range(n):
        for j in range(0, n - i - 1):
            if len(arr[j]) > len(arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr

inp = input("Enter strings separated by spaces: ")
arr = inp.strip().split()

sortedArr = sortByLength(arr)

print("Sorted strings by length:", sortedArr)
