arr1 =[]
n1 = int(input("Enter the number of elements in the first array: "))
for i in range(n1):
    val = int(input(f"Enter the {i} element of the first array: "))
    arr1.append(val)
arr2 =[]
n2 = int(input("Enter the number of elements in the second array: "))
for i in range(n2):
    val = int(input(f"Enter the {i} element of the second array: "))
    arr2.append(val)
newarr = []
i=0 
j=0
while i<len(arr1) and j<len(arr2):
    if arr1[i] < arr2[j]:
        newarr.append(arr1[i])
        i+=1
    else:
        newarr.append(arr2[j])
        j+=1
while i<len(arr1):
    newarr.append(arr1[i])
    i+=1
while j<len(arr2):
    newarr.append(arr2[j])
    j+=1
print(newarr)
