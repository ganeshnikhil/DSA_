#include <stdio.h>

int binary_search(int arr[],int n,int element);

int main(){
int n,element;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int arr[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array in a sorted manner:\n");
for(int i=0;i<n;++i){
scanf("%d",&arr[i]);
}

// Prompt the user to enter the element to be searched in the array
printf("Enter the target element:\n");
scanf("%d",&element);

int index=binary_search(arr,n,element);

if(index!=-1)
printf("The target element %d found at index: %d\n",element,index);
else
printf("%d\nNo such element found.\n",index);
return 0;
}

// Function to find the index of an element in an array using binary search technique
int binary_search(int arr[],int n,int element){
int left=0;
int right=n-1;

while(left<=right){
int mid=(left+right)/2;
if(arr[mid]==element)
return mid;
else if(arr[mid]<element)
left=mid+1;
else
right=mid-1;
}
return -1;
}

