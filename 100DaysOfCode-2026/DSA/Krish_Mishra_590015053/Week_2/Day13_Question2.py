def can_form_palindrome(word):
    count = {}

    for ch in word:
        if ch != " ":
            ch = ch.lower()
            if ch in count:
                count[ch] += 1
            else:
                count[ch] = 1

    odd_count = 0
    for value in count.values():
        if value % 2 != 0:
            odd_count += 1

    if odd_count <= 1:
        return True
    else:
        return False

print("Hi! This program checks if your word can be rearranged to make a palindrome.")
user_input = input("Enter a word or string: ")

if can_form_palindrome(user_input):
    print("Yes! A palindrome can be formed.")
else:
    print("No, a palindrome cannot be formed.")
