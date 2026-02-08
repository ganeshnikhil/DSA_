#include<stdio.h>
void main()
{
    int n,ele;
    int count=0;
   
    printf("enter the number of elements in array: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter array element for %d index\n",i);
        scanf("%d",&arr[i]);
    }
    printf("the array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n")
    printf("enter the element whose frequency need to be counted:\n");
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    printf("count of the given element is:%d",count);
}
