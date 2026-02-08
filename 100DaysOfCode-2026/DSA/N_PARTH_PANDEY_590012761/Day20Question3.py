def find_kth_largest():
    nums = list(map(int, input("Enter the array (space-separated): ").split()))
    k = int(input("Enter K: "))
    
    def partition(left, right, pivot_index):
        pivot = nums[pivot_index]
        nums[pivot_index], nums[right] = nums[right], nums[pivot_index]
        store_index = left
        
        for i in range(left, right):
            if nums[i] > pivot:
                nums[store_index], nums[i] = nums[i], nums[store_index]
                store_index += 1
                
        nums[right], nums[store_index] = nums[store_index], nums[right]
        return store_index
    
    left, right = 0, len(nums) - 1
    
    while True:
        pivot_index = partition(left, right, left)
        if pivot_index == k - 1:
            print("Kth largest element:", nums[pivot_index])
            return
        elif pivot_index < k - 1:
            left = pivot_index + 1
        else:
            right = pivot_index - 1

find_kth_largest()