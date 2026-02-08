def is_rotation(s1: str, s2: str) -> bool:
    # Check lengths first
    if len(s1) != len(s2):
        return False
    # Check if s2 is a substring of s1
    return s2 in (s1 + s1)

string1 = input("Enter first string: ")
string2 = input("Enter second string: ")

# --- Check rotation ---
if is_rotation(string1, string2):
    print("Output: true")
else:
    print("Output: false")
