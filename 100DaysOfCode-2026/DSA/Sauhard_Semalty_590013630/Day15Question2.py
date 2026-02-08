import sys


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

    strings: list[str] = []

    print("+--Enter the values--+")
    for _ in range(n):
        inp = input("> ").strip()
        if not inp:
            print("Empty string is not allowed.")
            sys.exit(-1)

        strings.append(inp)

    print(sorted(strings, key=len))


if __name__ == "__main__":
    main()
