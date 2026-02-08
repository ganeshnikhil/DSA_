s = input("Enter a string: ")

l = ""
for i in range(len(s)):
    for j in range(i, len(s)):
        a = s[i:j+1]  
        rev = a[::-1] 

        if a == rev:
            if len(a) > len(l):
                l = a  

print("Longest palindromic substring:", l)
