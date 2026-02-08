#1. The following function to check if a string contains only digits has a bug. Identify the issue:
'''
def is_digits_only(s):
    if len(s) == 0:
        return True # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

For input "", this returns True, but for input "123", it works correctly. What's the logical error?

A) Empty string should return False since it contains no digits

B) The loop condition should use indices instead of characters

C) The character comparison should use ASCII values

D) The function should handle negative numbers'''

#Answer:


#According to the given code
'''My Observation:
- For input: "123" → returns True 
- For input: "" (empty string) → returns True'''



#Explanation:
'''Line 1 causes a logical error. An empty string contains no characters at all, so it should not be considered as "only digits". 
For a string to be made of only digits, it should contain at least one character, and all must be digits.'''



#Answer: Option A is correct.
'''Which says:
A) Empty string should return False since it contains no digits'''



#Corrected Code for the above question is:
def is_digits_only(s):
    if len(s) == 0:
        return False  # fixed here
    for i in range(0, len(s)):
        if s[i] < '0' or s[i] > '9':
            return False
    return True

# Take user input
user_string = input("Enter a string to check if it contains only digits: ")

# Output result
if is_digits_only(user_string):
    print("The string contains only digits.")
else:
    print("The string does not contain only digits.")

