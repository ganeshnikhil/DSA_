import sys

def vowel_and_consonant_count(string: str) -> tuple[int, int]:
    "Counts vowels and consonants in the string."

    string = string.lower()

    vowels = 0
    consonants = 0

    for c in string:
        if c.isalpha():  # Can also check ascii values directly using ord function
            if c in ('a', 'e', 'i', 'o', 'u'):
                vowels += 1
            else:
                consonants += 1

    return vowels, consonants


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    vowels, consonants = vowel_and_consonant_count(string)
    print(f"Vowels: {vowels}, Consonants: {consonants}")


if __name__ == "__main__":
    main()
