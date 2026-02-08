def sortArray(arr):
    return sorted(arr)

inp = input("Enter integers separated by spaces: ")
arr = list(map(int, inp.strip().split()))

sortedArr = sortArray(arr)

print("Sorted array in ascending order:", sortedArr)
