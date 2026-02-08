import sys


def binary_search_int_sqrt(num: int) -> int | None:
    "Uses binary search to find the square root of a number."

    if num < 0:
        return None

    left, right = 0, num
    answer = None

    while left <= right:
        mid = left + (right - left) // 2
        square = mid ** 2

        if square > num:
            right = mid - 1
        elif square < num:
            answer = mid
            left = mid + 1
        else:
            return mid

    return answer


def main() -> None:
    "The entry point of the program."

    try:
        num = int(input("Enter the number: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    if num < 0:
        print("Only whole numbers (n >= 0) are allowed.")
        sys.exit(-1)

    print(binary_search_int_sqrt(num))


if __name__ == "__main__":
    main()
