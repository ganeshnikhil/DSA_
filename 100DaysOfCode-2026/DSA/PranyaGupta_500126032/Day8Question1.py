class Solution:
    def StringBasics(self, s):
        length = len(s)
        uprcase = s.upper()
        lwrcase = s.lower()
        return f"Length: {length}, UpperCase: {uprcase}, LowerCase: {lwrcase}"

def main():
    s = input("Enter the String: ")
    sol = Solution()
    result = sol.StringBasics(s)
    print(result)

if __name__ == "__main__":
    main()
