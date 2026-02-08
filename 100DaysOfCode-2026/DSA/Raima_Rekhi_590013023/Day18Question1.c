#include <stdio.h>

void selection_sort(int arr[],int n);

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

selection_sort(arr,n);
printf("Sorted Array in ascending order:\n");
for(int i=0;i<n;++i){  
printf("%d  ",arr[i]); 
}
printf("\n");
return 0;
}

// Function to sort an array using selection sort
void selection_sort(int arr[],int n){
for(int i=0;i<n;++i){
int min_index=i;

for(int j=i+1;j<n;++j){
if(arr[j]<arr[min_index])
min_index=j;
}

if(min_index!=i){
int temp=arr[i];
arr[i]=arr[min_index];
arr[min_index]=temp;
}
}
}
