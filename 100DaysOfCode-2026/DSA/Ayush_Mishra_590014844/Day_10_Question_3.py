def is_anagram(s1, s2):
    s1_clean = sorted(s1.replace(" ", "").lower())
    s2_clean = sorted(s2.replace(" ", "").lower())
    return s1_clean == s2_clean

# Example usage:
# print(is_anagram("The Eyes", "They See"))  # Output: True
