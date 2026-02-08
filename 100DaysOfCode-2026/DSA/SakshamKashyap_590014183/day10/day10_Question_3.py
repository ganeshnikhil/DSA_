#prompt the user to enter the string 1 and string 2

string1= list(input("Enter the string 1: ").strip())
string2 = list(input("Enter the string 2: ").strip())

freq_string1 = {}

print(string1)

freq_string2 = {}
for word in string1:
    if word in freq_string1:
        freq_string1[word] += 1
    else:
        freq_string1[word] = 1

for word in string2:
    if word in freq_string2:
        freq_string2[word] += 1
    else:
        freq_string2[word] = 1

if freq_string1 == freq_string2:
    print("true")
else:
    print("false")



    

