class Solution:
    def linearSearch(self, arr, target):
        n = len(arr)
        for i in range(n):
            if arr[i] == target:
                return i
        return -1
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    target = int(input("Enter target: "))
    sol = Solution()
    result = sol.linearSearch(arr, target)
    print(result)
if __name__ == "__main__":
    main()