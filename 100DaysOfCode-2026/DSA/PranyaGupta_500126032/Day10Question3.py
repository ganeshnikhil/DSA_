class Solution:
    def Anagram(self, s1,s2):
        l1 = sorted(s1)
        l2 = sorted(s2)
        return l1 == l2                  


def main():
    s1 = input("Enter String1: ")
    s2 = input("Enter String2: ")
    sol = Solution()
    result = sol.Anagram(s1,s2)
    print(result)

if __name__ == "__main__":
    main()
