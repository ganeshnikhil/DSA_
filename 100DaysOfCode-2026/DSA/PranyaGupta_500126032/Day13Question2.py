class Solution:
    def PermutationPalindrom(self, s):
        fc =0
        l = list(set(s))
        for ch in l:
            if s.count(ch)%2!=0:
                fc+=1;
        return fc <=1

    


def main():
    s = input("Enter String: ")
    sol = Solution()
    result = sol.PermutationPalindrom(s)
    print(result)

if __name__ == "__main__":
    main()
