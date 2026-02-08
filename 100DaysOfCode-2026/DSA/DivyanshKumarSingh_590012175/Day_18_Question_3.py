def SortColors(a):
    l,m,h=0,0,len(a)-1
    while m<=h:
        if a[m] == 0:
            a[l],a[m]=a[m],a[l]
            l+=1
            m+=1
        elif a[m]==1:
            m+=1
        else:
            a[m],a[h]=a[h],a[m]
            h-=1
    
a=list(map(int,input().split()))
SortColors(a)
print(*a)