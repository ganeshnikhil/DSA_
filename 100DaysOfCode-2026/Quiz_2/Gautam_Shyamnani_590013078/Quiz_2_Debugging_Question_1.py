#A) Empty string should return False since it contains no digits
def is_digits_only(s):
    if len(s) == 0:
        return False  # An empty string contains no digits
    for char in s:
        if char < '0' or char > '9':
            return False  # Return False if any non-digit is found
    return True  # All characters are digits
