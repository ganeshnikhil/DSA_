import sys


def linear_search(lst: list[int], target: int) -> int:
    "Searches the target in the list in O(n)."

    for i, v in enumerate(lst):
        if v == target:
            return i

    return -1


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

    # For 'target'
    try:
        target = int(input("Enter the value to search: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    print(linear_search(nums, target))


if __name__ == "__main__":
    main()
