import sys


def merge_sorted_arrays(first: list[int], second: list[int]) -> list[int]:
    """Returns a new sorted array containing
    elements from both sorted input arrays."""

    m = n = 0
    result = []

    while m < len(first) and n < len(second):
        if first[m] < second[n]:
            result.append(first[m])
            m += 1
        else:
            result.append(second[n])
            n += 1

    # Add the remaining elements
    if m < len(first):
        result += first[m:]
    if n < len(second):
        result += second[n:]

    return result


def take_input() -> list[int]:
    return [int(x.strip()) for x in input("> ").split(",")]


def main() -> None:
    "The entry point of the program."

    print("+--Enter comma separated values--+")
    try:
        array1 = take_input()
        assert array1

        array2 = take_input()
        assert array2
    except ValueError:
        print("Invalid input!")
        sys.exit(-1)
    except AssertionError:
        print("Array must contain at least 1 element.")
        sys.exit(-1)

    print(merge_sorted_arrays(array1, array2))


if __name__ == "__main__":
    main()
