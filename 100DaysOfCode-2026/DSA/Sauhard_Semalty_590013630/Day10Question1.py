import sys


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

    # Equality
    if first == second:
        print("Equal", end=', ')
    else:
        print("Not equal", end=', ')

    # Equality (case insensitive)
    if first.lower() == second.lower():
        print("Equal ignoring case", end=', ')
    else:
        print("Not equal ignoring case", end=', ')

    # lexicographical order
    if first < second:
        print(f"{first!r} comes before {second!r}")
    elif first > second:
        print(f"{second!r} comes before {first!r}")
    else:
        print("Strings are identical")


if __name__ == "__main__":
    main()
