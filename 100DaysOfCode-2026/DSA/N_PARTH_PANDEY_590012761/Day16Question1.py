def linear_search(arr, target):
    
    for index, element in enumerate(arr):
        if element == target:
            return index
    return -1


array = [10, 20, 30, 40, 50]
target = 30
print(linear_search(array, target))  