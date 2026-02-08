#Solution Function
def max_element(arr):
    if len(arr) < 1:
        return -1
    mel = arr[0]
    for i in range(len(arr)):
        if arr[i] > mel:
            mel = arr[i]
    return mel

#Fixed Input
array = [3, 7, 1, 9, 4, 6]
print(max_element(array))

#Custom Input
array = list(float(x) for x in input("Enter the array : ").split())
print(max_element(array))
