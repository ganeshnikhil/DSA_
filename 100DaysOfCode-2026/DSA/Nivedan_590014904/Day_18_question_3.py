arr =[]
n = int(input("Enter the number of elements in an array: "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
start = 0
ptr = 0
end = len(arr) - 1
while ptr<=end:
    if arr[ptr] == 0:
        arr[start] , arr[ptr] = arr[ptr] ,arr[start]
        start+=1
        ptr+=1
    elif arr[ptr] == 1:
        ptr+=1
    else:
        arr[ptr] , arr[end] = arr[end] , arr[ptr]
        end-=1
print(arr)
