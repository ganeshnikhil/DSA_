#include <stdio.h>

int max_element(int arr[],int n);

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

int max=max_element(arr,n);

printf("The maximum element found in the array is: %d\n",max);
return 0;
}

// Function to find the maximum element in an array
int max_element(int arr[],int n){
int max=arr[0];
for(int i=1;i<n;++i){
if(arr[i]>max)
max=arr[i];
}
return max;
}

