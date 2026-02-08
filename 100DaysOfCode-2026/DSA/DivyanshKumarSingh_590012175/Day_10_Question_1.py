def cmpstr(s1, s2):
    if s1 == s2:
        eq = "Equal"
    else:
        eq = "Not equal"
    
    if s1.lower() == s2.lower():
        caseSensi = "Equal ignoring case"
    else:
        caseSensi = "Not equal ignoring case"

    if s1 == s2:
        order = "Strings are identical"
    elif s1 < s2:
        order = f'"{s1}" comes before "{s2}"'
    else:
        order = f'"{s2}" comes before "{s1}"'

    return eq, caseSensi, order

s1 = input("Enter first string: ").strip()
s2 = input("Enter second string: ").strip()

eq, caseSensi, order = cmpstr(s1, s2)
print(f"{eq}, {caseSensi}, {order}")
