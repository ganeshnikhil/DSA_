import sys


def get_palindrome_substring(string: str) -> str:
    "Finds the longest palindromic substring from a string."

    longest = ""
    for i in range(len(string)):
        for j in range(i, len(string)):
            substring = string[i:j+1]
            if len(substring) > len(longest) and substring == substring[::-1]:
                longest = substring

    return longest


def main() -> None:
    "The entry point of the program."

    first = input("Enter a string: ")
    if not first:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(get_palindrome_substring(first))


if __name__ == "__main__":
    main()
