def is_rotation(s1: str, s2: str) -> bool:
    if len(s1) != len(s2):
        return False
    return s2 in (s1 + s1)
s1 = input("Enter the original string: ").strip()
s2 = input("Enter the string to check for rotation: ").strip()

if is_rotation(s1, s2):
    print("Yes, the second string is a rotation of the first.")
else:
    print("No, the second string is not a rotation of the first.")
# taking input from the user
# Example usage:
# s1 ="hello"
#s2="world"
#output: No, the second string is not a rotation of the first.