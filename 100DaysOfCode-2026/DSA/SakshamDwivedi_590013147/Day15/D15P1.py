#Solution Function
def sort_arr(arr):
    return sorted(arr)

#Fixed Input
print(sort_arr([11, 4, 7, 14, 9, 10, 1]))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
print(sort_arr(arr))
