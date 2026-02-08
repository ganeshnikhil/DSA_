def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

def count_occurrences(arr, target):
    count = 0
    for num in arr:
        if num == target:
            count += 1
    return count

array1 = [10, 20, 30, 40, 50]
target1 = 30
print("Linear Search:", linear_search(array1, target1))  

array2 = [1, 2, 2, 3, 2]
target2 = 2
print("Count Occurrences:", count_occurrences(array2, target2)) 
