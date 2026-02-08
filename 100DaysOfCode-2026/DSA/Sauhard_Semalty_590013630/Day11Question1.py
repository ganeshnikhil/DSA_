import sys


def is_palindrome_adv(string: str) -> bool:
    """Checks a string is palindrome or not, while ignoring
    while ignoring spaces, punctuations, and case."""

    # Keep only alphabets
    string = "".join(c for c in string if c.isalpha() or c.isdigit()).lower()
    return string == string[::-1]


def main() -> None:
    "The entry point of the program."

    first = input("Enter a string: ")
    if not first:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(is_palindrome_adv(first))


if __name__ == "__main__":
    main()
