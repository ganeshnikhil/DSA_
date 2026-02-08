import sys

def first_non_repeating(string: str) -> str | None:
    "Returns the first non repeating character from the string"

    string = string.lower()  # Case insensitive

    for c in string:
        if c.isalnum() and string.count(c) == 1:
            return c

    return None


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    # Find first non repeating alphanumeric character
    char = first_non_repeating(string)
    print(f"{char or -1!r}")


if __name__ == "__main__":
    main()
