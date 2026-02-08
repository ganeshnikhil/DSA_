#Sarthak Jain 590014936

def is_digits_only(s):
    # Task 1: Bug identified
    # The function returns True if the string is empty ("")
    # But an empty string does not contain any digits, so it should return False.
    if len(s) == 0:
        return False  # ✅ Fix: return False for empty string

    # Check each character
    for char in s:
        if char < '0' or char > '9':
            return False

    return True

"""
Tasks:

1. Identify the bug in the algorithm:
   - Line 1 incorrectly returns True for an empty string.
   - An empty string does not "contain only digits."

2. Explanation:
   - When s == "", len(s) == 0.
   - The function immediately returns True without checking any characters.
   - This is logically incorrect since no digits are present at all.

3. Corrected implementation:
   - Changed 'return True' in the empty string check to 'return False'.
   - Now it correctly validates that a non-empty string must consist only of digits.
"""
