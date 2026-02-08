#include<iostream>
#include<vector>
using namespace std;
int MaxElement(vector<int>arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    vector<int>arr={100, 250, 75, 300, 150};
    int n=arr.size();
    cout<<MaxElement(arr,n)<<endl;
    return 0;
}
