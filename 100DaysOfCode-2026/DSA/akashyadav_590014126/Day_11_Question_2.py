def check_palindrome(s):
    return s == s[::-1]

def longest_palindrome(s):
    n = len(s)
    longest = ""
    
    for i in range(n):
        for j in range(i + 1, n + 1):
            substr = s[i:j]

            if len(substr) > len(longest) and check_palindrome(substr): #checking if substring is longer than longest 
                longest = substr

    return longest

#example
print(longest_palindrome("racecar"))  # Output: "racecar"
