#include <stdio.h>

int linear_search(int arr[],int n,int element);

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

int index=linear_search(arr,n,element);

if(index!=-1)
printf("The target element %d found at index: %d\n",element,index);
else
printf("%d\nNo such element found.\n",index);
return 0;
}

// Function to find the index of an element in an array using linear search technique
int linear_search(int arr[],int n,int element){
for(int i=0;i<n;++i){
if(arr[i]==element)
return i;
}
return -1;
}
