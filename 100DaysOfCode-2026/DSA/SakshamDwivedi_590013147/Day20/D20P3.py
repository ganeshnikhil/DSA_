import random

#Solution Function
def ranked_largest(arr, k):
    for i in range(len(arr)):
        kt = 1
        for j in range(len(arr)):
            if arr[i] < arr[j]:
                kt += 1
        if kt == k:
            return arr[i]
    return None


#Efficient solution using quickselect (Came through research)
def quickselect(arr, k):
    if not arr:
        return None
    
    sel = random.choice(arr)
    
    left = [x for x in arr if x > sel]
    mid = [x for x in arr if x == sel]
    right = [x for x in arr if x < sel]

    if k <= len(left):
        return quickselect(left, k)
    elif k <= len(left) + len(mid):
        return sel
    else:
        return quickselect(right, k - len(left) - len(mid))
    
#Fixed Input
arr = [3, 2, 1, 5, 6, 4]
k = 2
print(ranked_largest(arr, k))
print(quickselect(arr, k))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
k = int(input("Enter the rank : "))
print(ranked_largest(arr, k))
print(quickselect(arr, k))
