#include<stdio.h>
int binsearch(int arr[],int n,int target)
{
    int sp=0,ep=n-1,mid;
    while(sp<=ep)
    {
        mid=(sp+ep)/2;
        if(arr[mid]==target)
        {
        return mid;
        }
        else if(arr[mid]>target)
        sp=mid+1;
        else 
        ep=mid-1;
    }
    return -1;
}

int main()
{
    int n;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter target value\n");
    scanf("%d",&target);
    printf("%d",binsearch(arr,n,target));
    return 0;
}
