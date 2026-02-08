def count_occur(arr,target):
    count = 0
    for e in arr:
        if e == target:
            count += 1
    return count

print(count_occur(arr=list(map(int,input("enter elements space-seperated: ").replace(',', ' ').split())),target=int(input("enter target: "))))