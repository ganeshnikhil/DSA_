def is_rotation(s1, s2):
    """
    Check if one string is a rotation of another string.
    
    Efficient approach: If s2 is a rotation of s1, then s2 will be a substring 
    of s1 + s1. For example, if s1="abcde" and s2="cdeab", then s1+s1="abcdeabcde"
    and s2 "cdeab" appears as a substring in "abcdeabcde".
    
    Time Complexity: O(n) where n is the length of the strings
    Space Complexity: O(n) for the concatenated string
    """
    # Check if lengths are equal (necessary condition)
    if len(s1) != len(s2):
        return False
    
    # Check if s2 is a substring of s1 + s1
    return s2 in (s1 + s1)

# Test cases for Problem 1
print("Problem 1: String Rotation")
print(f'is_rotation("abcde", "cdeab"): {is_rotation("abcde", "cdeab")}')  # True
print(f'is_rotation("hello", "world"): {is_rotation("hello", "world")}')  # False
print(f'is_rotation("waterbottle", "erbottlewat"): {is_rotation("waterbottle", "erbottlewat")}')  # True
print()