class Solution:
    def WordCount(self, s):
        lst = s.split()
        wc = len(lst)
        maxlen = lst[0]
        for i in range(1, wc):
            if len(lst[i])>len(maxlen):
                maxlen = lst[i]
        return f"Word Count: {wc}, Longest Word: {maxlen}"          

def main():
    s = input("Enter String: ")
    sol = Solution()
    result = sol.WordCount(s)
    print(result)

if __name__ == "__main__":
    main()
