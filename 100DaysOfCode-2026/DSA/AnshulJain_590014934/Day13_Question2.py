s = input()
freq = {}
for c in s:
    freq[c] = freq.get(c, 0) + 1
odd_count = sum(1 for count in freq.values() if count % 2 != 0)
print(odd_count <= 1)
# taking input from the user 
# input ="aab"
# output= True