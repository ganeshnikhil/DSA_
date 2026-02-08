string = input("Enter a String: ")
count = 0
for i in range(len(string)):
    for j in range(i,len(string)):
        substr = string[i:j+1:]
        if substr == substr[::-1]:
            count+=1
print(count)
