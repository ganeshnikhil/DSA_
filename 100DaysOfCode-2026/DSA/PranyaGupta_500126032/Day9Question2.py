class Solution:
    def vowelandconsonents(self, s):
        s = s.lower()
        v = 'aeiou'
        vowel =0
        consonents = 0
        for c in s:
            if c in v:
                vowel+=1
            else:
                consonents+=1
        return f"Vowels: {vowel}, Consonents: {consonents}"            

def main():
    s = input("Enter the String: ")
    sol = Solution()
    result = sol.vowelandconsonents(s)
    print(result)

if __name__ == "__main__":
    main()
