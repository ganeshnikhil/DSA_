def is_digits_only(s):
    if len(s) == 0:
        return False 
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

if __name__ == "__main__":
    test_cases = ["12345", "12a45", "", "007", "0", " "]

    for test in test_cases:
        result = is_digits_only(test)
        print(f"Input: '{test}' --> Only digits? {result}")
