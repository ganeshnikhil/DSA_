#include <stdio.h>
#include <stdbool.h>

bool search_matrix(int matrix[][100],int rows,int cols,int target);

int main(){
int rows,cols;
int matrix[100][100];
printf("Enter the number of rows and columns:\n");
scanf("%d %d",&rows,&cols);

// Input matrix elements
printf("Enter the elements of the matrix (each row in ascending order and columns also sorted):\n");
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
scanf("%d",&matrix[i][j]);
}
}

int target;
printf("Enter the target element:\n");
scanf("%d",&target);

if(search_matrix(matrix,rows,cols,target))
printf("True\nElement %d found in the matrix.\n", target);
else
printf("False\nElement %d not found.\n", target);
return 0;
}

// Function to search for target in a 2D matrix sorted row-wise and column-wise
bool search_matrix(int matrix[][100],int rows,int cols,int target){
int row=0,col=cols-1;

while(row<rows && col>=0){
if(matrix[row][col]==target)
return true;
else if(matrix[row][col]>target)
col--;
else
row++;
}
return false;
}
