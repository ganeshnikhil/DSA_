# Compress strings using character count encoding with size optimization
s = input("enter string :")

i = 0
compressed = ""
while i < len(s):
    current_char = s[i]
    count = 1

 
    j = i + 1
    while j < len(s) and s[j] == current_char:
        count = count + 1
        j = j + 1

    compressed = compressed + current_char

    temp = ""
    num = count

    while num > 0:
        digit = num % 10
        temp = chr(digit + 48) + temp
        num = num // 10

    compressed = compressed + temp

    i = j

original_len = 0
for ch in s:
    original_len = original_len + 1

compressed_len = 0
for ch in compressed:
    compressed_len = compressed_len + 1

if compressed_len < original_len:
    print(compressed)
else:
    print(s)
