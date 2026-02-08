from collections import Counter

def is_anagram(s1, s2):
    s1_clean = ''.join(s1.lower().split())
    s2_clean = ''.join(s2.lower().split())
    return Counter(s1_clean) == Counter(s2_clean)

print(is_anagram("listen", "silent"))
print(is_anagram("hello", "world"))
print(is_anagram("The Eyes", "They See"))
