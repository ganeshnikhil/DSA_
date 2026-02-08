Your task: Check if one string is a rotation of another using an efficient approach.
def check_rotation(original, rotated):
    if len(original) != len(rotated):
        return False
    double_string = original + original
    if rotated in double_string:
        return True
    else:
        return False
