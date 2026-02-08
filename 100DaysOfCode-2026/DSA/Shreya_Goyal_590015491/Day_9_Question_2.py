a = input("Enter a string: ")
v=0
c=0
for ch in a:
    if ch.isalpha():
        ch = ch.lower()
        if ch in 'aeiou':
            v+=1
        else:
            c+=1
print("Vowels:", v)
print("Consonants:", c)
