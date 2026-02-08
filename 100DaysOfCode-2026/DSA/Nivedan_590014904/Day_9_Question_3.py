string = input("Enter a string: ")
string = string.lower()
for n in string:
    count = 0
    for val in string:
        if n == val:
            count+=1
    if count == 1:
        print(n)
        break
else:
    print("None")
