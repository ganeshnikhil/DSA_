def is_palindrome(s):
  
    new_str = ''
    for char in s:
        if char.isalpha():
            new_str += char.lower()
    

    length = len(new_str)
    for i in range(length // 2):
        if new_str[i] != new_str[length - 1 - i]:
            return False
    return True


print(is_palindrome("tenet"))                
print(is_palindrome("Hello"))                  
