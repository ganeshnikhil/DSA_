def is_digits_only(s):
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# Example usage
print("Test 1:", is_digits_only("123456"))  # True
print("Test 2:", is_digits_only(""))        # False
