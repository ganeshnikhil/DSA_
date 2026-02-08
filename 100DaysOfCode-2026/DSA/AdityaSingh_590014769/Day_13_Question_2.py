# Problem 2: Palindrome Permutation
# Given a string, determine if any permutation of the characters
# can form a palindrome. At most one character may have an odd frequency.

def func(s):
    freq = {}
    for ch in s:
        if ch.isalnum():
            ch = ch.lower()
            freq[ch] = freq.get(ch, 0) + 1
    odd_count = sum(1 for count in freq.values() if count % 2 != 0)
    return odd_count <= 1

user_input = input("Enter a string to check for palindrome permutation: ")
print("Can form palindrome permutation:", func(user_input))