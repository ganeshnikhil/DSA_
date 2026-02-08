#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void DNF(vector<int>&arr,int n){
    int start=0,mid=0,end=n-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            mid=mid+1;
            start=start+1;
        }else if(arr[mid]==1){
            mid=mid+1;
        }else{
            swap(arr[mid],arr[end]);
            end=end-1;
        }
    }
}
void PrintArray(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={1, 2, 0, 1, 2, 0};
    int n=arr.size();
    DNF(arr,n);
    PrintArray(arr,n);
    return 0;
}
