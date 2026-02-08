def reverse_words(s):
    words = s.strip().split()
    reversed_words = words[::-1]
    return ' '.join(reversed_words)

print(reverse_words("Hello World Programming"))  
print(reverse_words("The quick brown fox"))      
print(reverse_words("   Extra   spaces  here "))  
