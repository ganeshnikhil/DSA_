import sys

def selection_sort(nums: list[int]) -> None:
    "Sorts list in place using selection sort."

    for i in range(len(nums)):  # pylint: disable=consider-using-enumerate
        minimum = i
        for j, value in enumerate(nums[i+1:]):
            if value < nums[minimum]:
                minimum = (i + 1) + j

        nums[i], nums[minimum] = nums[minimum], nums[i]


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

    selection_sort(nums)  # Sort list in place
    print(nums)


if __name__ == "__main__":
    main()
