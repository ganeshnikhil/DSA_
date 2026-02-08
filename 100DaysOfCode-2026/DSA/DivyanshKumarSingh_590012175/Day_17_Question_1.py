def binarySearch(a,t):
    l,r=0,len(a)-1
    while l<=r:
        m=(l+r)//2
        if(a[m]==t):
            return m
        elif a[m]<t:
            l=m+1
        else:
            r=m-1
        
    return -1

n=int(input())
a=list(map(int,input().split()))
t=int(input())
print(binarySearch(a,t))