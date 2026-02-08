Your task: Implement efficient search in rotated sorted arrays using binary search principles.


def search_in_rotated_array(numbers, target_number):
    if not numbers:
        return -1

    start = 0
    end = len(numbers) - 1
    while start <= end:
        middle = (start + end) // 2
        if numbers[middle] == target_number:
            return middle

        if numbers[start] <= numbers[middle]:
            if numbers[start] <= target_number < numbers[middle]:
                end = middle - 1
            else:
                start = middle + 1
        else:
            if numbers[middle] < target_number <= numbers[end]:
                start = middle + 1
            else:
                end = middle - 1
    return -1
