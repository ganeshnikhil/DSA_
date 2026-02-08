#  Count the frequency of a target value in an array.
arr=list(map(int,input("enter list with space :").split()))
target=int(input("enter target no :"))
count={}
for num in arr:
    if num in count:
        count[num]=count[num]+1
    else:
        count[num]=1
output=0
if target in count.keys():
    output=count[target]
print (output)
