import sys
import random


def kth_largest(nums: list[int], k: int) -> int | None:
    "Finds the kth largest element from the list."

    if k > len(nums):
        return None

    pivot = random.choice(nums)  # Randomness to prevent infinite recursion

    low = [x for x in nums if x < pivot]
    mid = [x for x in nums if x == pivot]
    high = [x for x in nums if x > pivot]

    if k <= len(high):
        return kth_largest(high, k)
    elif k <= len(high) + len(mid):
        return pivot
    else:
        return kth_largest(low, k - len(high) - len(mid))


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

    print("+--Enter the values--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        nums.append(num)

    # For 'k'
    try:
        k = int(input("Enter the value of k: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    # Check if k is valid
    if k <= 0:
        print("k must be greater than 0.")
        sys.exit(-1)

    print(result
          if (result := kth_largest(nums, k)) is not None
          else "Value of k is greater than the size of array.")


if __name__ == "__main__":
    main()
