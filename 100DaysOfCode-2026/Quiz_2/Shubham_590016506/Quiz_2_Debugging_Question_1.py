# Task 1: Check if string contains only digits

def is_digits_only(s):
    # Bug: This function incorrectly returns True for an empty string.
    # Answer: A) Empty string should return False since it contains no digits
    # Fix: Return False if the string is empty
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# Sample test
print(is_digits_only(""))        # Expected: False
print(is_digits_only("12345"))   # Expected: True
print(is_digits_only("12a45"))   # Expected: False


