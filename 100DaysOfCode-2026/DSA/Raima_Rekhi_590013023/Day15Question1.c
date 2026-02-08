#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b);

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

// Sort the array
qsort(arr,n,sizeof(int),compare);

// Print the sorted array
printf("Sorted array in ascending order:\n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

// Comparison function for qsort
int compare(const void*a,const void*b){
return(*(int*)a-*(int*)b); // Ascending order
}
