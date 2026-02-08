Your task: Find the Kth largest element using efficient selection algorithms beyond simple 
sorting.


def find_kth_largest(nums, k):
    if not isinstance(nums, list):
        print("Input must be a list.")
        return None

    if not all(isinstance(x, int) for x in nums):
        print("All elements in the list must be integers.")
        return None

    if len(nums) == 0:
        print("The list is empty.")
        return None

    if not isinstance(k, int):
        print("K must be an integer.")
        return None

    if k < 1 or k > len(nums):
        print("K must be between 1 and the length of the list.")
        return None

    sorted_nums = sorted(nums, reverse=True)
    return sorted_nums[k - 1]
