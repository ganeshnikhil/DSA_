#include<stdio.h>
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
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
        printf("%d",i);
        c++;
        break;
        }
     }
     if(c==0)
     printf("not present\n");
    
}
