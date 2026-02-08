class Solution:
    def RemoveSpaces(self, s):                  
        trim = s.strip()
        allspaces = s.replace(" ", '')
        singlespaces = ' '.join(s.split())
        return f"Remove all: {allspaces}, Trim: {trim}, Single Spaces: {singlespaces}"

def main():
    s = input("Enter String: ")
    sol = Solution()
    result = sol.RemoveSpaces(s)
    print(result)

if __name__ == "__main__":
    main()
