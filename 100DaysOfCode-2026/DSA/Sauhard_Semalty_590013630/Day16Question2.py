import sys


def count(lst: list[int], target: int) -> int:
    "Counts the occurance of target in the list."

    result = 0
    for i in lst:
        if i == target:
            result += 1

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

    print(count(nums, target))


if __name__ == "__main__":
    main()
