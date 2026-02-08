class Solution:
    def binarySearch(self, arr, target):
        n = len(arr)
        left = 0
        right = n-1
        while right>=left:
            mid = left+(right-left)//2
            if arr[mid] == target:
                return mid
            elif arr[mid] > target:
                right = mid-1
            elif arr[mid]< target:
                left = mid+1
        return -1        

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    target = int(input("Enter Target: "))
    sol = Solution()
    result = sol.binarySearch(arr, target)
    print(result)
if __name__ == "__main__":
    main()