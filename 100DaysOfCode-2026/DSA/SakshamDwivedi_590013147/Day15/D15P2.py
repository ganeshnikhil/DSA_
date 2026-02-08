#Solution Function
def sort_arr(arr):
    return sorted(arr, key=len)

#Fixed Input
print(sort_arr(["apple", "pie", "washington", "cat"]))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
print(sort_arr(arr))

