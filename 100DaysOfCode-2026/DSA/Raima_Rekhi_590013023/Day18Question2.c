#include <stdio.h>

void insertion_sort(int arr[],int n);

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

insertion_sort(arr,n);
printf("Sorted Array in ascending order:\n");
for(int i=0;i<n;++i){
printf("%d  ",arr[i]);
}
printf("\n");
return 0;
}

// Function to sort an array using insertion sort
void insertion_sort(int arr[],int n){
for(int i=1;i<n;++i){
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
}
