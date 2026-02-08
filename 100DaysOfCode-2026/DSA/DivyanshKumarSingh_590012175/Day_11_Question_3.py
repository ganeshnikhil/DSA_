def countPalindrome(s):
    n = len(s)  
    count = 0   

    def expand(l, r):
        nonlocal count
        
        while l >= 0 and r < n and s[l] == s[r]:
            count += 1  
            l -= 1      
            r += 1      

    for c in range(n):
        expand(c, c)     
        expand(c, c + 1) 

    return count  


inp = input("Enter a string: ")

result = countPalindrome(inp)
print("Total Palindromic Substring:", result)
