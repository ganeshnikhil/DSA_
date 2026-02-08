#include<iostream>
using namespace std;
int BinarySearchAlgorithm(int arr[],int n,int target){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,3,5,6,11,14,17};
    int n=sizeof(arr)/sizeof(int);
    int target=11;
    cout<<BinarySearchAlgorithm(arr,n,target);
    return 0;
}
