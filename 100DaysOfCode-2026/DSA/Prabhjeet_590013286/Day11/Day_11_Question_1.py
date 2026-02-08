def function(s):
    cleaned = ''
    for ch in s:
        if ch.isalnum():  
            cleaned += ch.lower()  
    return cleaned == cleaned[::-1]

user_input = input("Enter a phrase:")

if function(user_input):
    print(" It's a palindrome!")
else:
    print(" It's not a palindrome.")
              
