n  = int(input('Enter the number of elements: '))
arr = []
for i in range(n):
    val = int(input(f"Enter element {i+1}: "))
    arr.append(val)
for i in range(n):
    for j in range( 0 ,n-i-1):
        if arr[j]>arr[j+1]:
            arr[j] , arr [j+1] = arr[j+1],arr[j]
print(arr)
