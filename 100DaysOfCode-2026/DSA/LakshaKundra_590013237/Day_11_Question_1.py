def is_palindrome(text):
    text = text.lower()
    result = ""
    for char in text:
        if char.isalnum():
            result += char
    if result == result[::-1]:
        return True
    else:
        return False

print(is_palindrome("A man, a plan, a canal: Panama"))
print(is_palindrome("race a car"))
print(is_palindrome("Was it a car or a cat I saw?"))
