#include <stdio.h>

int count_frequency(int arr[],int n,int element);

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

// Prompt the user to enter the element whose frequency needs to be counted
printf("Enter the target element:\n");
scanf("%d",&element);

int count=count_frequency(arr,n,element);

if(count!=0)
printf("The frequency of the target element %d is: %d\n",element,count);
else
printf("No such element found.\n");
return 0;
}

// Function to find the frequency of an element in an array
int count_frequency(int arr[],int n,int element){
int count=0;
for(int i=0;i<n;++i){
if(arr[i]==element)
++count;
}
return count;
}

