import sys

def peak_element(nums: list[int]) -> int | None:
    "Finds a peak element in the list."

    left = 0
    right = len(nums) - 1

    while left <= right:
        mid = left + (right - left) // 2
        left_check = mid == 0 or nums[mid] >= nums[mid - 1]
        right_check = mid == len(nums) - 1 or nums[mid] >= nums[mid + 1]

        if left_check and right_check:
            return mid

        if left_check:
            left = mid + 1
        else:
            right = mid - 1

    return None


def main() -> None:
    "The entry point of the program."

    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)

    # Check if length is valid
    if n <= 0:
        print("Size must be greater 0.")
        sys.exit(-1)

    nums: list[int] = []

    print("+--Enter the values--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        nums.append(num)

    print(result
          if (result := peak_element(nums)) is not None
          else "No peak elements; All elements are equal or search is ambiguous.")


if __name__ == "__main__":
    main()
