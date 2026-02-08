#Solution Function
def occurrence(arr, target):
    count = 0
    for i in range(len(arr)):
        if arr[i] == target:
            count += 1
    return count

#Fixed Input
array = [1, 2, 3, 2, 2, 4]
tar = 2
print(occurrence(array, tar))
    
#Custom Input
array = list(float(x) for x in input("Enter the array : ").split())
tar = input("Enter the target value : ")
if tar == "":
    tar = None
else:
    tar = float(tar)
print(occurrence(array, tar))
