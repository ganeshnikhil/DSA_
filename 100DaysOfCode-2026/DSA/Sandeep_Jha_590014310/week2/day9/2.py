def count(s):
    freq_count = {"vowels": 0, "consonants": 0}
    vowels = set('aeiou')
    for c in s.lower():
        if c.isalpha():
            if c in vowels:
                freq_count['vowels'] += 1
            else:
                freq_count['consonants'] += 1
    return freq_count

print(count(s = input("enter your word: ")))

#input = hello -> output = {'vowels': 2, 'consonants': 3}