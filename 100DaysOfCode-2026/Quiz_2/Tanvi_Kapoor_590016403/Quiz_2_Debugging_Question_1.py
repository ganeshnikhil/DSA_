def is_digits_only(s):
    # A) Empty string should return False
    if len(s) == 0:
        return False

    for char in s:
        # B) Looping with 'char in s' is valid; index loop not needed
        # C) Character comparison is valid; no need to use ord(char)
        if char < '0' or char > '9':
            return False
    
    # D) Function is NOT designed to handle negative numbers or signs
    return True

# --- Test Cases to Address All Options ---

test_cases = {
    "": "A) Empty string - Should return False",
    "123": "Valid digits - Should return True",
    "12a3": "Invalid character 'a' - Should return False",
    "000": "All zeros - Should return True",
    "-123": "D) Negative number - Should return False (not handled)",
    "+123": "D) Plus sign - Should return False (not handled)",
    " 123": "Leading space - Should return False",
    "123 ": "Trailing space - Should return False",
}

print("Testing is_digits_only function:\n")
for input_str, description in test_cases.items():
    result = is_digits_only(input_str)
    print(f"Input: '{input_str}' | Result: {result} | {description}")
