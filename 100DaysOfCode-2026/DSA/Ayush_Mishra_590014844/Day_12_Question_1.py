def is_rotation(s1, s2):
    return len(s1) == len(s2) and s2 in (s1 + s1)

# Example usage
print(is_rotation("abcde", "cdeab"))  # True
print(is_rotation("hello", "world"))  # False
