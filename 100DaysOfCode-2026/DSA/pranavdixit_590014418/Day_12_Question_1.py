def is_rotation(s1, s2):
    if len(s1) != len(s2):
        return False
    return s2 in s1 + s1

print(is_rotation("abcde", "cdeab"))
print(is_rotation("hello", "world"))
print(is_rotation("waterbottle", "erbottlewat"))
