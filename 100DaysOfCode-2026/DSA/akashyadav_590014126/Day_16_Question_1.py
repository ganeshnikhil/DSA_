def linear_search(arr, target):
    for index in range(len(arr)):
        if arr[index] == target:
            return index  # element found , and its index is returned
    return -1  # if the element is not present 

#example
print(linear_search([15, 25, 35, 45], 25))      # Output: 1