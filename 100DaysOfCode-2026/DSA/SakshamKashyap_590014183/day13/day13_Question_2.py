#prompt the user to enter the string

user_str = input("Enter the string: ").strip().lower()

dict ={}

for word in user_str:
    if word not in dict:
        dict[word] = 0
    dict[word] += 1

odd_count = 0

for count in dict.values():
    if count % 2 != 0:
        odd_count +=1

if odd_count <= 1:
    print("true")
else:
    print("false")