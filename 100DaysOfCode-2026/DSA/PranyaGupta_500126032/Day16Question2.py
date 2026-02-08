class Solution:
    def CountOccurence(self, arr, target):
        n = len(arr)
        count = 0
        for i in range(n):
            if arr[i] == target:
                count+=1
        return count      
        
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    target = int(input("Enter target: "))
    sol = Solution()
    result = sol.CountOccurence(arr, target)
    print(result)
if __name__ == "__main__":
    main()