Your task: Check if a string is a palindrome (case-insensitive, alphabetic characters only).
def is_palindrome(text):
    only_letters = ""
    for char in text:
        if char.isalpha():
            only_letters += char.lower()
  
    reversed_text = only_letters[::-1]
    
    if only_letters == reversed_text:
        return True
    else:
        return False


