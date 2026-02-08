s = input("Type a sentence: ")

string = ""
for ch in s:
    if ch.isalnum():
        string+=ch.lower()

if string==string[::-1]:
    print("True")
else:
    print("False")
