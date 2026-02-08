#include<stdio.h>
int linearsearch(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
        return i;
        break;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter target value\n");
    scanf("%d",&target);
    printf("%d",linearsearch(arr,n,target));
    return 0;
}
