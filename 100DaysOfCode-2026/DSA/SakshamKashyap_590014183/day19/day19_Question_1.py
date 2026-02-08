# function to rotate the array
def array_rotate(arr,k):
    n = len(arr)
    k = k % n 
    return arr[-k:] + arr[:-k]

def binary_search(arr,value):
    left = 0
    right = len(arr)
    while left <= right:
        mid = (left+right)//2
        if arr[mid] == value:
            return mid
        elif arr[mid] < value:
            left = mid + 1
        else:
            right = mid - 1
    return -1

#prompt the user to enter the array

My_array = list(map(int,input("Enter the element of array(Give space between them): ").strip().split()))

pivot_point = int(input("Enter the step u want to rotate the array: "))

My_array.sort()

print("My array is: ",My_array)

rotated_array = array_rotate(My_array,pivot_point)

print("Rotated array: ",rotated_array)

target_value = int(input("Enter the value you want to find in array: "))

result = binary_search(rotated_array,target_value)

if result != -1:
    print("The index of finding elements is: ",result)
else:
    print(result)

