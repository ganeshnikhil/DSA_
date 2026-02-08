class Solution:
    def Frequency(self,s, c):
        count = 0
        for char in s:
            if char == c:
                count+=1
        return count        

def main():
    s = input("Enter the String: ")
    c = input("Enter the character: ")
    sol = Solution()
    result = sol.Frequency(s,c)
    print(result)

if __name__ == "__main__":
    main()
