#include <stdio.h>

void merge_sorted_arrays(int arr1[],int n1,int arr2[],int n2,int merged[]);

int main(){
int arr1[100],arr2[100],merged[200];
int n1,n2;

// Input the size and elements of the first sorted array
printf("Enter number of elements in first sorted array: ");
scanf("%d",&n1);
printf("Enter elements of first sorted array:\n");
for(int i=0;i<n1;++i) scanf("%d",&arr1[i]);

// Input the size and elements of the second sorted array
printf("Enter number of elements in second sorted array: ");
scanf("%d",&n2);
printf("Enter elements of second sorted array:\n");
for(int i=0;i<n2;++i) scanf("%d",&arr2[i]);

merge_sorted_arrays(arr1,n1,arr2,n2,merged);

printf("Merged sorted array:\n");
for(int i=0;i<(n1+n2);++i) printf("%d  ",merged[i]);
printf("\n");

return 0;
}

// Function to merge two sorted arrays using two-pointer technique
void merge_sorted_arrays(int arr1[],int n1,int arr2[],int n2,int merged[]){
int i=0,j=0,k=0;

while(i<n1 && j<n2){
if(arr1[i]<arr2[j])
merged[k++]=arr1[i++];
else
merged[k++]=arr2[j++];
}

while(i<n1){
merged[k++]=arr1[i++];
}

while(j<n2){
merged[k++]=arr2[j++];
}
}
