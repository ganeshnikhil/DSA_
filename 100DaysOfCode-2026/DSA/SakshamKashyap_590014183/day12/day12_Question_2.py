#prompt the user to enter the string

string = input().strip().lower()

unique_string = "" 
 
for word in string:
    if word not in unique_string:
        unique_string += word

print(unique_string)