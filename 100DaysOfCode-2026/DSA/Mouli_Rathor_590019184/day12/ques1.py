def is_rotation(string1, string2):
    if len(string1) != len(string2):
        return False
    return string2 in (string1 + string1)

print(is_rotation("abcde", "cdeab"))
print(is_rotation("hello", "world"))
print(is_rotation("waterbottle", "erbottlewat"))
