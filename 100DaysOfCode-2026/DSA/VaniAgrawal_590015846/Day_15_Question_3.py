#: Implement bubble sort algorithm from scratch without using built-in sorting functions. 
arr = list(map(int,input("enter list :").split()))  

n = len(arr)

i = 0
while i < n - 1:
    j = 0
    while j < n - i - 1:
        if arr[j] > arr[j + 1]:
            # Swap the elements
            temp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = temp
        j += 1
    i += 1

print(arr)
