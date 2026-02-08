#include<iostream>
#include<vector>
using namespace std;
int CountOccurence(vector<int>arr,int n,int target){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>arr={5, 1, 5, 5, 3, 5, 7};
    int n=arr.size();
    int target=5;
    cout<<CountOccurence(arr,n,target)<<endl;
    return 0;
}
