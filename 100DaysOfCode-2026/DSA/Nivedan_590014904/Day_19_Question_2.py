arr =[]
n = int(input("Enter the number of elements in an array: "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
low = 0
high = len(arr) -1 
while low <= high:
    mid = (high+low)//2
    if mid>0 and mid<(n-1):
         if arr[mid-1] < arr[mid] and arr[mid] > arr[mid+1]:
          print(mid)
          break
         if arr[mid] < arr[mid-1]:
           high = mid-1
         else :
            low  = mid +1
    elif mid == 0:
       if arr[mid] > arr[mid + 1]:
          print(mid)
       else:
          print(mid+1)
       break
    elif mid == n-1:
       if arr[mid] > arr[mid -1]:
          print(mid)
       else:
          print(mid-1)
       break
