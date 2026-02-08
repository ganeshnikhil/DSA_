import sys


def sort_entries(entries: list[tuple[str, int]]):
    "Sorts list of students and grades in descending order in place."

    # entries.sort(key=lambda e: e[1], reverse=True)

    for i in range(len(entries)):
        for j in range(len(entries) - i - 1):
            if entries[j][1] < entries[j+1][1]:
                entries[j], entries[j+1] = entries[j+1], entries[j]


def main() -> None:
    "The entry point of the program."

    try:
        n = int(input("Enter the number of entries: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    # Check if length is valid
    if n <= 0:
        print("Number must be greater than 0.")
        sys.exit(-1)

    entries: list[tuple[str, int]] = []

    print("+-- Enter entries in the format: <student>:<entries> --+")
    for _ in range(n):
        try:
            entry = input("> ").split(":")
            assert len(entry) == 2  # Validate format

            entry = entry[0].strip(), int(entry[1].strip())
            assert entry[0]  # Validate name length
        except (ValueError, AssertionError):
            print("Invalid entry!")
            sys.exit(-1)

        entries.append(entry)

    sort_entries(entries)
    print(entries)


if __name__ == "__main__":
    main()
