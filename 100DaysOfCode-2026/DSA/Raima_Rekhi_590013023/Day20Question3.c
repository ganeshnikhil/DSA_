#include <stdio.h>
#include <stdlib.h>

int find_kth_largest(int arr[],int n,int k);
int compare_descending(const void *a,const void *b);

int main(){
int n,k;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int arr[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&arr[i]);
}

// Prompt user for the value of K
printf("Enter the value of K:\n");
scanf("%d",&k);

if(k>0 && k<=n){
int result=find_kth_largest(arr,n,k);
printf("The element is: %d\n",result);
}
else
printf("Invalid value of K.\n");

return 0;
}

// Comparison function for qsort: sorts in descending order
int compare_descending(const void *a,const void *b){
return (*(int*)b - *(int*)a);
}

// Function to find the Kth largest element using sorting
int find_kth_largest(int arr[],int n,int k){
qsort(arr,n,sizeof(int),compare_descending);
return arr[k-1];
}
