import sys


def is_permut_palindrome(string: str) -> bool:
    "Checks if any permutation of a string is a palindrome."

    flag = False

    for c in string:
        if string.count(c) % 2 == 1:
            if flag:
                return False
            else:
                flag = True

    return True


def main() -> None:
    "The entry point of the program."

    string = input("Enter a string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(is_permut_palindrome(string))


if __name__ == "__main__":
    main()
