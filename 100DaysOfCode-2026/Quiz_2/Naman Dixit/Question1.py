#Question1  answer - A) Empty string should return False since it contains no digits

#include <stdio.h>
#include <stdbool.h>

#Function to check if the string contains only digits
def is_digits_only(s):
    if len(s) == 0:
        return False  # Empty string is NOT considered to contain digits

    for char in s:
        if char < '0' or char > '9':
            return False

    return True

# Main method to call the function
def main():
    s = input("Enter string: ")
    result = is_digits_only(s)

    if result:
        print("The input contains only digits.")
    else:
        print("The input does NOT contain only digits.")

if __name__ == "__main__":
    main()
