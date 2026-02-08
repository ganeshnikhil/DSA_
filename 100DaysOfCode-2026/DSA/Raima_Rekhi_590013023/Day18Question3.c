#include <stdio.h>

void sort_colours(int arr[],int n);

int main(){
int n;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int arr[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&arr[i]);
}

sort_colours(arr,n);

printf("Sorted Array:\n");
for(int i=0;i<n;++i){
printf("%d  ",arr[i]);
}
printf("\n");
return 0;
}

// Function to sort array of 0s, 1s, and 2s using Dutch National Flag algorithm
void sort_colours(int arr[],int n){
int low=0, mid=0,high=n-1;

while(mid<=high){

if(arr[mid]==0){
int temp=arr[low];
arr[low]=arr[mid];
arr[mid]=temp;
low++;
mid++;
}

else if(arr[mid]==1){
mid++;
}

else{
int temp=arr[mid];
arr[mid]=arr[high];
arr[high]=temp;
high--;
}
}
}
