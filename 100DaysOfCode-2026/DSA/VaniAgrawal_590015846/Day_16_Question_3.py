#Find the maximum element in an array using single-pass traversal. 
arr=list(map(int,input("enter list :").split()))
maximum =arr[0]
for num in arr:
    if num>maximum:
        maximum=num
print(maximum)
