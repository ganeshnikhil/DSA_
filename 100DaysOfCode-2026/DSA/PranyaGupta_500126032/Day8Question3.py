class Solution:
    def ReverseString(self, s):
        rev = s[::-1]
        return rev

def main():
    s = input("Enter the String: ")
    sol = Solution()
    result = sol.ReverseString(s)
    print(result)

if __name__ == "__main__":
    main()
