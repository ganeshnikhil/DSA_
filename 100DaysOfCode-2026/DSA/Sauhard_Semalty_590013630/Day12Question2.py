import sys


def get_unique(string: str) -> str:
    "Gets a string of unique characters from the input string."

    result = ""
    for i in string:
        if not i in result:
            result += i

    return result


def main() -> None:
    "The entry point of the program."

    string = input("Enter a string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(get_unique(string))


if __name__ == "__main__":
    main()
