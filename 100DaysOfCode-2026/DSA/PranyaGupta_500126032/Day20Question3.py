class Solution:
    def kthlargest(self, arr, k):
        arr = sorted(arr)
        n = len(arr)
        return arr[-k]        

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    k = int(input("Enter k: "))
    sol = Solution()
    result = sol.kthlargest(arr, k)
    print(result)
if __name__ == "__main__":
    main()