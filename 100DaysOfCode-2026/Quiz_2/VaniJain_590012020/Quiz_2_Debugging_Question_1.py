task
A) Empty string should return False since it contains no digits

B) The loop condition should use indices instead of characters

C) The character comparison should use ASCII values

D) The function should handle negative numbers

task 1
def is_digits_only(s):
    if len(s) == 0:
        return False  
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
task 2
def is_digits_only(s):
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

task 3
def is_digits_only(s):
    if len(s) == 0:
        return False  # Fix: empty string shouldn't return True
    for char in s:
        if ord(char) < 48 or ord(char) > 57:
            return False
    return True

task 4
def is_digits_only(s):
    if len(s) == 0:
        return False  # empty string is not a number

    if s[0] == '-':
        if len(s) == 1:
            return False  # just '-' is not a valid number
        s = s[1:]  # skip the minus sign

    for char in s:
        if char < '0' or char > '9':
            return False
    return True

