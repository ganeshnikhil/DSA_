def remove_duplicates(s):
    """
    Remove all duplicate characters keeping only the first occurrence.
    
    Approach: Use a set to track seen characters and build result string.
    
    Time Complexity: O(n) where n is the length of the string
    Space Complexity: O(k) where k is the number of unique characters
    """
    seen = set()
    result = []
    
    for char in s:
        if char not in seen:
            seen.add(char)
            result.append(char)
    
    return ''.join(result)

# Test cases for Problem 2
print("Problem 2: Remove Duplicate Characters")
print(f'remove_duplicates("programming"): "{remove_duplicates("programming")}"')  # "progamin"
print(f'remove_duplicates("hello"): "{remove_duplicates("hello")}"')  # "helo"
print(f'remove_duplicates("aabbcc"): "{remove_duplicates("aabbcc")}"')  # "abc"
print()