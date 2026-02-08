import sys


def count_and_get_longest_word(string: str) -> tuple[int, str]:
    "Gets the word count and the longest word from the string"

    start = 0
    end = 0
    w_count = 0

    curr_start = -1
    curr_end = -1
    for index, char in enumerate(string + " "):
        if not char.isspace():
            if curr_start == -1:
                curr_start = curr_end = index
            else:
                curr_end += 1
        else:
            if curr_start != -1:
                if curr_end - curr_start > end - start:
                    start, end = curr_start, curr_end

                w_count += 1
                curr_start, curr_end = -1, -1


    return w_count, string[start:end+1]


def main() -> None:
    "The entry point of the program."

    string = input("Enter a string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    count, longest = count_and_get_longest_word(string)
    print(f"Word count: {count}, Longest word: {longest!r}")


if __name__ == "__main__":
    main()
