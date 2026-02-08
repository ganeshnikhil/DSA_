def check_palindrome(s):
    rev_list = list(s.lower())[::-1]
    rev_string = ""
    for i in rev_list:
        rev_string += i
    if rev_string == s.lower():
        return True
    else:
        return False
st = input("Enter the string: ")
print(check_palindrome(st))
