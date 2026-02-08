#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]");
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("\n");
     printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]");
    return 0;
}
