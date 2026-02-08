class Solution:
    def Palindrome(self, s):
        l=[]     
        s = s.lower()             
        for ch in s:
            if ch.isalpha():
                l.append(ch)
        print(l)
        print(l[::-1])        
        return l == l[::-1]        

def main():
    s = input("Enter String: ")
    sol = Solution()
    result = sol.Palindrome(s)
    print(result)

if __name__ == "__main__":
    main()
