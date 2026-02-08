class Solution:
    def peakelement(self, arr):
        for i in range(1, len(arr)-2):
            if arr[i-1] < arr[i] and arr[i] > arr[i+1]:
                return i            




def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.peakelement(arr)
    print(result)
if __name__ == "__main__":
    main()