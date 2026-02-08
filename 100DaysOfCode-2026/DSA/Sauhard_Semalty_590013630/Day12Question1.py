import sys


def is_rotation(first: str, second: str) -> bool:
    "Checks if the second string a rotation of the first."

    if len(first) != len(second):
        return False

    return second in first + first


def main() -> None:
    "The entry point of the program."

    first = input("Enter first string: ")
    if not first:
        print("Empty string is not allowed.")
        sys.exit(-1)

    second = input("Enter second string: ")
    if not second:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(is_rotation(first, second))


if __name__ == "__main__":
    main()
