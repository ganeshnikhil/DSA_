#Find the first character that appears only once, or return -1 if none exists.
string=input("enter string :")

for i in string:
    if string.count(i)==1:
        non_repeating=i
        break
    else:
        non_repeating=-1
print(non_repeating)
