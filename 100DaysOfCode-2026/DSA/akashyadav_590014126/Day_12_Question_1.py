def is_rotation(s1: str, s2: str) -> bool:
    if len(s1) != len(s2):
        return False
    n = len(s1)
    for i in range(n):
        rotated = s1[i:] + s1[:i]
        if rotated == s2:
            return True
    return False

print(is_rotation("abcde", "cdeab"))  # Output: True