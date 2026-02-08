#include<iostream>
#include<vector>
using namespace std;
int IndexOfTarget(vector<int>arr,int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={10,20,30,40,50,60};
    int n=arr.size();
    int target=30;
    cout<<IndexOfTarget(arr,n,target)<<endl;
    return 0;
}
