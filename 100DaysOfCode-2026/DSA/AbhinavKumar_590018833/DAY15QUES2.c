#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void printArray(char arr[][50],int n){
    for (int i = 0; i < n; i++)
    {
        printf(",%s ",arr[i]);
    }
    printf("\n");
}
void sortByLen(char arr[][50], int n){
    char temp[50];
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strlen(arr[j])>strlen(arr[j+1])) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}
int main(){
//     Input:
// ["apple", "pie", "washington", "cat"]
// Output:
// ["pie", "cat", "apple", "washington"]
    char arr1[][50]={"apple","pie","washington","cat"};
    int n1=4;
    printArray(arr1,n1);
    sortByLen(arr1,n1);
    printArray(arr1,n1);
    printf("\n\n");
//     Input:
// ["hello", "world", "a", "programming", "fun"]
// Output:
// ["a", "fun", "hello", "world", "programming"]
    char arr2[][50]={"hello", "world","a", "programming", "fun"};
    int n2=5;
    printArray(arr2,n2);
    sortByLen(arr2,n2);
    printArray(arr2,n2);
    printf("\n\n");
//     Input:
// ["java", "python", "c", "javascript"]
// Output:
// ["c", "java", "python", "javascript"]
    char arr3[][50]={"java", "python", "c", "javascript"};
    int n3=4;
    printArray(arr3,n3);
    sortByLen(arr3,n3);
    printArray(arr3,n3);    

    return 0;
}