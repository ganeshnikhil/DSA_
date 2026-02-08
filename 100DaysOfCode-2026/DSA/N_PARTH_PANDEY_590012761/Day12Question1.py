def is_rotation(s1, s2):
    if len(s1) != len(s2):
        return False
    concatenated = s1 + s1
    return s2 in concatenated
print(is_rotation("rotation", "tionrota"))  
print(is_rotation("python", "thonpy"))  