# Compare two strings for exact equality, case-insensitive equality, and lexicographical order. 
string1=input("string1:")
string2=input("string2:")
if string1==string2:
    output1="Equal"
else :
    output1="Not equal"

if string1.lower()==string2.lower():
    output2="Equal ignoring case"
else:
    output2=" Not equal ignoring case"

list=[string1,string2]
list.sort()
if string1 != string2:
    output3=f'"{list[0]}" comes before "{list[1]}"'
else:
    output3="Strings are identical"

print(f"{output1},{output2},{output3}")
