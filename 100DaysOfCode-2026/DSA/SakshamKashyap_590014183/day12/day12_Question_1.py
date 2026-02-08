#prompt the user to enter the string 1 and string 2

string1 = input("String1: ").strip().lower()
string2 = input("String2: ").strip().lower()

list_string1 = list(string1)
rotated_list = [list_string1[0]] * len(list_string1)

list_string2 = list(string2)

for k in range(len(string1)):
    for i in range(len(string1)):
        rotated_list[(k+i)%(len(list_string1))] = list_string1[i]
    if rotated_list == list_string2:
        print("true")
        break
else:
    print("false")