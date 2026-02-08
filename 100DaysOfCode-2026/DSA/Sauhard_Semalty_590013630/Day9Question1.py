import sys

def is_palindrome(string: str) -> bool:
    "Checks if the string is palindrome (case insensitive)."

    string = string.lower()
    half = len(string) // 2

    for i in range(half):
        if string[i] != string[-1 - i]:
            return False

    return True


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    # Check for palindrome
    print(str(is_palindrome(string)).lower())


if __name__ == "__main__":
    main()
