class Solution:
    def Palindrome(self, s):
        s=s.lower()
        rev = s[::-1]
        return s==rev

def main():
    s = input("Enter the String: ")
    sol = Solution()
    result = sol.Palindrome(s)
    print(result)

if __name__ == "__main__":
    main()
