def canFormPalindrome(s):
    freq = {}

    for ch in s:
        freq[ch] = freq.get(ch,0) + 1
    
    odd = 0

    for c in freq.values():
        if c % 2 != 0:
            odd += 1

    return odd <= 1


inp = input("Enter a string: ").strip('"')

if canFormPalindrome(inp):
    print("true")
else:
    print("false")
    
Add comment
