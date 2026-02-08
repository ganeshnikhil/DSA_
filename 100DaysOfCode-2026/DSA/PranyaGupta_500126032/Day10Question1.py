class Solution:
    def StringComparison(self, s1, s2):
        equal = ""
        caseequal = ""
        lexographicorder = ""
        if s1 == s2:
            equal = "Equal"
        else:
            equal = "Not Equal"
        if s1.lower() == s2.lower():
            caseequal = "Equal Ignoring Case "
        else:
            caseequal = "Not Equal Ignoring Case"
        if s1>s2:
            lexographicorder = s2+"comes before"+s1
        else:
            lexographicorder = s1+" comes before "+s2                    
        return f"{equal}, {caseequal}, {lexographicorder}"
def main():
    s1 = input("Enter String1: ")
    s2 = input("Enter the String2: ")
    sol = Solution()
    result = sol.StringComparison(s1,s2)
    print(result)

if __name__ == "__main__":
    main()
