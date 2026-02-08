Your task: Check if a string is a palindrome ignoring spaces, punctuation, and case.

def is_palindrome(text):
    cleaned_text = ""
    for char in text:
        if char.isalnum():
            cleaned_text += char.lower()
    reversed_text = cleaned_text[::-1]
    if cleaned_text == reversed_text:
        return True
    else:
        return False

input_string = "A man, a plan, a canal: Panama"

if is_palindrome(input_string):
    print("Yes, it's a palindrome!")
else:
    print("No, it's not a palindrome.")
