import sys


def reverse_words(string: str) -> str:
    "Reverses words in a string"

    # return " ".join(string.split()[::-1])

    result = ""
    curr_word = ""

    for c in string + " ":
        if not c.isspace():
            curr_word += c
        else:
            if curr_word:
                result = f"{curr_word} {result}"
                curr_word = ""

    return result


def main() -> None:
    "The entry point of the program."

    string = input("Enter a string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(reverse_words(string))


if __name__ == "__main__":
    main()
