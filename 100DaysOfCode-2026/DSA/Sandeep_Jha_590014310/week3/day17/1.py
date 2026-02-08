def lin_sear(arr,target):
    for e in arr:
        if e == target:
            return arr.index(e)
    return -1
    
print(lin_sear(arr=list(map(int,input("enter elements space-seperated: ").replace(',', ' ').split())),target=int(input("enter target: "))))