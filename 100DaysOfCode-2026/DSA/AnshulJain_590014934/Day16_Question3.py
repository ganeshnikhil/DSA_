arr = list(map(int, input().split()))# taking input from the user 
def find_max(arr):
    max_val = arr[0]
    for num in arr[1:]:
        if num > max_val:
            max_val = num
    return max_val
print(find_max(arr))
#for example
#input:-arr=[1,2,4,8,7,10]
#output is 10