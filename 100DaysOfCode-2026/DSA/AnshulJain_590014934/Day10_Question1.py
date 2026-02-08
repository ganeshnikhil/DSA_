s1 = input("String1: ").strip()
s2 = input("String2: ").strip()
eq = "Equal" if s1 == s2 else "Not equal"
ci_eq = "Equal ignoring case" if s1.lower() == s2.lower() else "Not equal ignoring case"
order = f'"{s1}" comes before "{s2}"' if s1 < s2 else f'"{s2}" comes before "{s1}"' if s1 > s2 else "Strings are lexicographically equal."
print(f"{eq}, {ci_eq}, {order}")
# Taking input from the user
# EXAMPLE: String1: hello
#          String2: Hello
# Output: Equal, Equal ignoring case, "hello" comes before "Hello"