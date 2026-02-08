def count_vc(s):
    s = [c.lower() for c in s if c.isalpha()]
    return sum(c in 'aeiou' for c in s), sum(c not in 'aeiou' for c in s)

print(count_vc("Hello, World! 123"))      # (3, 7)
print(count_vc("Python Programming"))     # (4, 13)
