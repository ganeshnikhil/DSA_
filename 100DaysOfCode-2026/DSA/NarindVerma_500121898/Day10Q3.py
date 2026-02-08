from collections import Counter

def are_anagrams(str1, str2):
    # Normalize: lowercase and remove spaces
    clean1 = str1.replace(" ", "").lower()
    clean2 = str2.replace(" ", "").lower()
    return Counter(clean1) == Counter(clean2)

# Example usage:
print(are_anagrams("listen", "silent"))        # Output: True
print(are_anagrams("hello", "world"))          # Output: False
print(are_anagrams("The Eyes", "They See"))    # Output: True
