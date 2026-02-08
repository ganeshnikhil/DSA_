# Problem 1: String Rotation
# Given two strings, determine whether one string 
# is a rotation of the other. A rotation means characters 
# can be shifted from the front to the end.
# Efficiently solve this without generating all possible rotations.
# Example: "abcde" and "cdeab" → True
def is_rotation(s1, s2):
    return len(s1) == len(s2) and s2 in (s1 + s1)

str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")

if is_rotation(str1, str2):
    print(" The second string is a rotation of the first.")
else:
    print(" The second string is NOT a rotation of the first.")
