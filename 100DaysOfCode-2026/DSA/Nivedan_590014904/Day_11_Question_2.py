string = input("Enter a String: ")
longest = ""
for i in range(len(string)):
    for j in range(i,len(string)):
        substr = string[i:j+1]
        if substr == substr[::-1]:
            if len(substr)>len(longest):
                longest = substr
print(longest)
