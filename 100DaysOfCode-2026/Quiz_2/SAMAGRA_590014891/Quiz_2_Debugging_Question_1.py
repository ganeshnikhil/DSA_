# Bug Fix and Explanation
# The function had a logical bug where it returned True for an empty string (""), 
# which is incorrect because an empty string does not contain any digits.
# Fixed by changing 'return True' to 'return False' when the string is empty.
# Tested and works correctly for normal digit strings, mixed strings, and empty strings.
# Correct answer to the question: A) Empty string should return False since it contains no digits.

def is_digits_only(s):
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

print(is_digits_only("123"))    
print(is_digits_only("12a3"))   
print(is_digits_only(""))       
print(is_digits_only("000"))   
