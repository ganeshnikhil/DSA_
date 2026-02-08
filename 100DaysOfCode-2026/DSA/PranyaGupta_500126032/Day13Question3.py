class Solution:
    def WordReverse(self, s):
        l = s.split()
        return l[::-1]
        
    


def main():
    s = input("Enter String: ")
    sol = Solution()
    result = sol.WordReverse(s)
    print(result)

if __name__ == "__main__":
    main()
