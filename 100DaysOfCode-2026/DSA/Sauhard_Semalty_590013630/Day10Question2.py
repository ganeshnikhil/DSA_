import sys


def remove_all_spaces(string: str) -> str:
    "Removes all spaces from a string"

    result = ""
    for c in string:
        if not c.isspace():
            result += c
    return result


def trim(string: str) -> str:
    "Removes leading and trailing spaces from a string"

    leading = 0
    trailing = 0

    for index, c in enumerate(string):
        if not c.isspace():
            leading = index
            break
    else:
        return ""  # The string does not contain any characters

    for index, c in enumerate(string[::-1]):
        if not c.isspace():
            trailing = len(string) - index
            break


    return string[leading:trailing]


def remove_extra_space(string: str) -> str:
    "Removes extra space around words in a string"

    result = ""
    word = ""

    for c in string + " ":
        if not c.isspace():
            word += c
        else:
            if word:
                result += word + " "
                word = ""

    return result[:-1]  # Remove the extra space at the end


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(f"Remove all: {remove_all_spaces(string)!r}, Trim: {trim(string)!r}"
          f", Single spaces: {remove_extra_space(string)!r}")


if __name__ == "__main__":
    main()
