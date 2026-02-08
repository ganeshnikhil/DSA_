# 1. Linear Search

def linear_search(l,ele):
    if ele in l:
        for i in l:
            if i==ele:
                return l.index(i)
    else:
        return -1
nums = list(map(int,input("Enter the array elemnts seperated by space: ").split()))
Ele = int(input("Enter the element to search: "))
print(linear_search(nums,Ele))