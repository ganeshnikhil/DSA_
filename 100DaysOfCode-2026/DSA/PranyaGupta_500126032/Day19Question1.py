class Solution:
    def modifiedbinarysearch(self, arr, target):
        low = 0
        high = len(arr)-1
        while low<=high:
            mid = low+(high-low)//2
            if arr[mid] == target:
                return mid
            elif arr[low] <= arr[mid]:
                if arr[low] <= target < arr[mid]:
                    high = mid-1
                else:
                    low = mid+1
            else:
                if arr[high]>= target > arr[mid]:
                    low = mid+1
                else:
                    high = mid-1
        return -1                                      




def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    target = int(input("Enter element to search: "))
    sol = Solution()
    result = sol.modifiedbinarysearch(arr, target)
    print(result)
if __name__ == "__main__":
    main()