class Solution:
    def firstOccurence(self, s):
        for c in s:
            if s.count(c)<2:
                return c
        return -1    

def main():
    s = input("Enter the String: ")
    sol = Solution()
    result = sol.firstOccurence(s)
    print(result)

if __name__ == "__main__":
    main()
