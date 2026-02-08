import sys


def is_anagram(first: str, second: str) -> bool:
    "Checks whether both the strings are anagram of each other"

    if len(first) != len(second):
        return False

    return sorted(first.lower()) == sorted(second.lower())


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

    print(is_anagram(first, second))


if __name__ == "__main__":
    main()
