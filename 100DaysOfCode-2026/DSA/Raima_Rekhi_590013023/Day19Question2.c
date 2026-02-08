#include <stdio.h>

int find_peak(int arr[],int n);

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

int index=find_peak(arr,n);
printf("Peak element found at index: %d (value: %d)\n",index,arr[index]);
return 0;
}

// Function to find a peak element index using binary search
int find_peak(int arr[],int n){
int left=0,right=n-1;

while(left<right){
int mid=(left+right)/2;

if(arr[mid]<arr[mid+1])
left=mid+1;
else
right=mid;
}

return left;
}
