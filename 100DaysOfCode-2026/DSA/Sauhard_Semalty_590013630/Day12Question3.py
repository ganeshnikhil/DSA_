import sys


def rle_encode(string: str) -> str:
    "Encodes a string using run-length encoding."

    result = ""
    count = 1
    for i in string:
        if result:
            if result[-1] == i:
                count += 1
                continue
            result += str(count)
            count = 1

        result += i
    result += str(count)

    return result


def main() -> None:
    "The entry point of the program."

    string = input("Enter a string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    print(rle_encode(string))


if __name__ == "__main__":
    main()
