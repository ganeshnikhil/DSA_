def find_max(arr):
    max = float('-inf')
    for n in arr:
        if n > max:
            max = n
    return max

print(find_max(arr=list(map(int,input("enter elements space-seperated: ").replace(',', ' ').split()))))