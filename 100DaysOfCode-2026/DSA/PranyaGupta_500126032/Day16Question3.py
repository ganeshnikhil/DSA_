class Solution:
    def MaxElement(self, arr):
        n = len(arr)
        m = arr[0]
        for i in range(n):
            if arr[i]>m:
                m = arr[i]
        return m           
        
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.MaxElement(arr)
    print(result)
if __name__ == "__main__":
    main()