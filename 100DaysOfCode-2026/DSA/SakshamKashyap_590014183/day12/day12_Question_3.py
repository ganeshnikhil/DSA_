#Prompt the user to enter the string

string = input("Enter the string: ")

charcter_count = 0

My_dict = {}

for word in string:
    if word in My_dict:
        My_dict[word] +=1
    else:
        My_dict[word] = 1
# Build the encoded string
compressed_str= ""
for key, value in My_dict.items():
    compressed_str += key+str(value)
if len(compressed_str) >= len(string):
    print(string)
else:
    print(compressed_str)