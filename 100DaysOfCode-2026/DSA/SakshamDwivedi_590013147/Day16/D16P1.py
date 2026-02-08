#Solution Function
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

#Fixed Input
array = [10, 20, 30, 40, 50, 60]
print(linear_search(array, 30))

#Custom Input
array = list(float(x) for x in input("Enter the array : ").split())
tar = input("Enter the target value : ")
if tar == "":
    tar = None
else:
    tar = float(tar)
print(linear_search(array, tar))
