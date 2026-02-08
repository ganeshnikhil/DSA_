#include <stdio.h>

void bubble_sort(int arr[],int n);

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

bubble_sort(arr,n);

printf("Sorted Array:\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}

return 0;
}

// Function to sort the array in ascending order using bubble sort
void bubble_sort(int arr[],int n){
for(int i=0;i<n-1;++i){
for(int j=0;j<n-i-1;++j){
if(arr[j]>arr[j+1]){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
