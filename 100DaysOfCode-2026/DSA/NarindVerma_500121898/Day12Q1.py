def is_rotation(s1: str, s2: str) -> bool:
    if len(s1) != len(s2):
        return False
    return s2 in (s1 + s1)

# Test Cases
print(is_rotation("abcde", "cdeab"))       # True
print(is_rotation("hello", "world"))       # False
print(is_rotation("waterbottle", "erbottlewat"))  # True
