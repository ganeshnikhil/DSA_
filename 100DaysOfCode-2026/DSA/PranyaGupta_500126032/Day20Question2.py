class Solution:
    def mergesort(self, arr1, arr2):
        n1 = len(arr1)
        n2 = len(arr2)
        n = n1+n2
        res = []
        i=0
        j=0
        while i<n1 and j<n2:
            if arr1[i] < arr2[j]:
                res.append(arr1[i])
                i+=1
            else:
                res.append(arr2[j])
                j+=1
        if i != n1-1:
            for n in range(i, n1):
                res.append(arr1[n])            
        if j != n2-1:
            for n in range(j, n2):
                res.append(arr2[n])
        return res        

                     
def main():
    user_input1 = input("Enter elements of the array1 (with space in between): ")
    arr1 = list(map(int, user_input1.strip().split()))
    user_input2 = input("Enter elements of the array2 (with space in between): ")
    arr2 = list(map(int, user_input2.strip().split()))
    
    sol = Solution()
    result = sol.mergesort(arr1, arr2)
    print(result)
if __name__ == "__main__":
    main()