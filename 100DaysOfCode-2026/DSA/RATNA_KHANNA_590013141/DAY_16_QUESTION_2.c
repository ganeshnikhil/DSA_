#include<stdio.h>
int freq(int arr[],int n,int target)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
        c++;
        }
    }
    return c;
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
    printf("frequency=%d",freq(arr,n,target));
    return 0;
}
