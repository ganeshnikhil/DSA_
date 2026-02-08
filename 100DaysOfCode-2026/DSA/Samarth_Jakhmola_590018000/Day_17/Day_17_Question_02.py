def first_occurence(array, target):
    beg = 0
    end = len(array) - 1
    result = -1

    while beg <= end:
        mid = (beg + end) // 2
        if array[mid] == target:
            result = mid
            end = mid - 1
        elif target < array[mid]:
            end = mid - 1
        else:
            beg = mid + 1

    return result

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    target = int(input("Enter the element whose first occurence is to be found : "))
    print(first_occurence(array, target))
except:
    print("Invalid input.")
