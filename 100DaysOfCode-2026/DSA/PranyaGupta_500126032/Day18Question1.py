class Solution:
    def Selectionsort(self, arr):
        n = len(arr)
        j=0
        while j<n-1:
            minele = arr[j]
            ind = j
            for i in range(j,n):
                if arr[i]< minele:
                    minele = arr[i]
                    ind = i
                    temp = arr[j]
                    arr[j] = arr[ind]
                    arr[ind] = temp
            j+=1
        return arr              




def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.Selectionsort(arr)
    print(result)
if __name__ == "__main__":
    main()