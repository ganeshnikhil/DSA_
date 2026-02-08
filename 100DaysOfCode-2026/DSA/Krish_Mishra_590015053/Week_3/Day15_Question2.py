def sort_by_length_custom(arr):
  n = len(arr)
 for i in range(n):
 for j in range(n - i - 1):
 if len(arr[j]) > len(arr[j + 1]):
 arr[j], arr[j + 1] = arr[j + 1], arr[j]
   
