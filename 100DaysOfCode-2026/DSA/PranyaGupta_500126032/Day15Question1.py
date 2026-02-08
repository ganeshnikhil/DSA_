class Solution:
    def SimpleArraySorting(self, arr):
        return sorted(arr)
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.SimpleArraySorting(arr)
    print(result)
if __name__ == "__main__":
    main()