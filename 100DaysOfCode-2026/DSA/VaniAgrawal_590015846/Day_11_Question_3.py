#Count the total number of palindromic substrings in a string
s = input("enter string :")

n = 0
for _ in s:
    n += 1

count = 0
i = 0

while i < n:
    left = i
    right = i
    while left >= 0 and right < n and s[left] == s[right]:
        count += 1
        left -= 1
        right += 1

    left = i
    right = i + 1
    while left >=0 and right < n and s[left]==s[right]:
        count += 1
        left -= 1
        right +=1

    i+=1

print(count)
