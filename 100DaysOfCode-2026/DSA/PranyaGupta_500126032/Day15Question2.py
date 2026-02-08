class Solution:
    def StringSorting(self, arr):
        n = len(arr)
        for i in range(n):
            for j in range(0, n-i-1):
                if len(arr[j]) > len(arr[j+1]):
                    temp = arr[j]
                    arr[j] = arr[j+1]
                    arr[j+1] = temp
        return arr            
        
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(str, user_input.strip().split()))
    sol = Solution()
    result = sol.StrinSorting(arr)
    print(result)
if __name__ == "__main__":
    main()