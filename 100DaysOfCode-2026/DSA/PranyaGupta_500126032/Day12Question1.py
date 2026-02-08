class Solution:
    def RotateString(self, s1, s2):
        n = len(s1)
        if len(s1)!=len(s2):
            return False
        rotated = [0]*n 
        for i in range(n):
            for j in range(n):
                rotated[j]=s1[(j+i)%n]
            if ''.join(rotated) == s2:
                return True
        return False              

def main():
    s1 = input("Enter String1: ")
    s2 =  input("Enter String2: ")
    sol = Solution()
    result = sol.RotateString(s1, s2)
    print(result)

if __name__ == "__main__":
    main()
