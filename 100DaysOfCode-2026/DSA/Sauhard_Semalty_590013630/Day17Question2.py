import sys


def binary_search_first(lst: list[int], target: int) -> int:
    """Uses binary search to find the first occurance
    of target in the list."""

    if not lst:
        return -1

    left = 0
    right = len(lst) - 1

    result = -1

    while left <= right:
        mid = left + (right - left) // 2
        item = lst[mid]

        if target < item:
            right = mid - 1
        elif target > item:
            left = mid + 1
        else:
            result = mid
            right = mid - 1

    return result


def main() -> None:
    "The entry point of the program."

    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)

    # Check if length is valid
    if n <= 0:
        print("Size must be greater than 0.")
        sys.exit(-1)

    nums: list[int] = []

    print("+--Enter the values (ascending order)--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        nums.append(num)

    # For 'target'
    try:
        target = int(input("Enter the value to search: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    print(binary_search_first(nums, target))


if __name__ == "__main__":
    main()
