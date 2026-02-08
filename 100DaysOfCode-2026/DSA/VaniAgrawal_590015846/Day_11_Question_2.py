# Find the longest palindromic substring in a given string
s = input("enter string :")

length = 0
for _ in s:
    length += 1

start = 0
max_len = 1

i = 0
while i < length:
    
    left = i
    right = i
    while left >= 0 and right < length and s[left] == s[right]:
        curr_len = right - left + 1
        if curr_len > max_len:
            start = left
            max_len = curr_len
        left -= 1
        right += 1

    
    left = i
    right = i + 1
    while left >= 0 and right < length and s[left] == s[right]:
        curr_len = right - left + 1
        if curr_len > max_len:
            start = left
            max_len = curr_len
        left -= 1
        right += 1

    i += 1

j = 0
while j < length:
    if j >= start and j < start + max_len:
        print(s[j], end='')
    j += 1
