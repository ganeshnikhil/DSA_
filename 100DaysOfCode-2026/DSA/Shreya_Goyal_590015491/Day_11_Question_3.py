s = input("Enter a string: ")
l = ""
c=0   
for i in range(len(s)):
    for j in range(i, len(s)):
        a = s[i:j+1]  
        rev = a[::-1] 
        if a==rev:
            c+=1
            if len(a) > len(l):
                l=a  

print("Total palindromic substrings:", c)
