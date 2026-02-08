import sys


def count_palindrome_substring(string: str) -> int:
    "Counts palindromic substrings in a string."

    count = 0
    for i in range(len(string)):
        for j in range(i, len(string)):
            substring = string[i:j+1]
            if substring == substring[::-1]:
                count += 1

    return count

def main() -> None:
    "The entry point of the program."

    first = input("Enter a string: ")
    if not first:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(count_palindrome_substring(first))


if __name__ == "__main__":
    main()
