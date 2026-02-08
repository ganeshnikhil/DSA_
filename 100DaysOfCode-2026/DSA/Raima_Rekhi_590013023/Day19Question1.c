#include <stdio.h>

int search_rotated(int arr[],int n,int target);

int main(){
int n,element;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int arr[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&arr[i]);
}

// Prompt the user to enter the element to be searched in the array
printf("Enter the target element:\n");
scanf("%d",&element);

int index = search_rotated(arr,n,element);

if(index!=-1)
printf("The target element %d found at index: %d\n",element,index);
else
printf("%d\nNo such element found.\n",index);
return 0;
}

// Function to perform binary search on a rotated sorted array
int search_rotated(int arr[],int n,int target){
int left=0,right=n-1;
while(left<=right){
int mid=(right+left)/2;

if(arr[mid]==target) return mid;

if(arr[left]<=arr[mid]){
if(arr[left]<=target && target<arr[mid])
right=mid-1;
else
left=mid+1;
}

else{
if(arr[mid]<target && target<=arr[right])
left=mid+1;
else
right=mid-1;
}
}

return -1; // Target not found
}
